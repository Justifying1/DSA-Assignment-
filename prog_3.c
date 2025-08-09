#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) return newNode;
    
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

void displayForward(struct Node* head) {
    printf("Forward: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void reverseTraversal(struct Node* head) {
    if (head == NULL) return;
    
    reverseTraversal(head->next);
    
    printf("%d ", head->data);
}

int main() {
    struct Node* head = NULL;
    
    head = insertAtEnd(head, 11);
    head = insertAtEnd(head, 21);
    head = insertAtEnd(head, 36);
    head = insertAtEnd(head, 48);
    head = insertAtEnd(head, 50);
    
    displayForward(head);
    
    printf("Reverse: ");
    reverseTraversal(head);
    printf("\n");
    
    return 0;
}
