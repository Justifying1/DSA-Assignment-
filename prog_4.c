#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

void insertAfter(struct Node* p, int data) {
    if (!p) return;
    struct Node* n = malloc(sizeof(struct Node));
    if (!n) exit(1);
    n->data = data; n->next = p->next; n->prev = p;
    if (p->next) p->next->prev = n;
    p->next = n;
}

void deleteNode(struct Node** head, struct Node* d) {
    if (!*head || !d) return;
    if (*head == d) *head = d->next;
    if (d->prev) d->prev->next = d->next;
    if (d->next) d->next->prev = d->prev;
    free(d);
}

void printList(struct Node* n) {
    for (; n; n = n->next) printf("%d ", n->data);
    printf("\n");
}

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    if (!head) exit(1);
    head->data = 5; head->prev = head->next = NULL;

    printf("Initial original: "); printList(head);
    insertAfter(head, 10);
    printf("Insert 10 after 5: "); printList(head);
    insertAfter(head->next, 40);
    printf("Insert 40 after 10: "); printList(head);
    deleteNode(&head, head->next);
    printf("Delete 10: "); printList(head);

    while (head) { struct Node* t = head; head = head->next; free(t); 
    
    }
    return 0;
}