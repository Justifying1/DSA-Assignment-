#include <stdio.h>
#include <string.h>

#define MAX 100

struct Stack {

    char items[MAX];
    int top;
};

void initStack(struct Stack* s) { s->top = -1; }

int isEmpty(struct Stack* s) { return s->top == -1; }

void push(struct Stack* s, char item) {

    if (s->top == MAX - 1) exit(1);
    s->items[++(s->top)] = item;
}

char pop(struct Stack* s) {

    return isEmpty(s) ? '\0' : s->items[(s->top)--];
}

int isBalanced(const char* expr) {
    struct Stack s;

    initStack(&s);

    for (int i = 0; expr[i]; i++) {

        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            push(&s, expr[i]);

        } else if (expr[i] == ')' || expr[i] == ']' || expr[i] == '}') {
            char top = pop(&s);

            if ((expr[i] == ')' && top != '(') ||
                (expr[i] == ']' && top != '[') ||
                (expr[i] == '}' && top != '{')) {
                return 0;
            }
        }
    }
    return isEmpty(&s);
}

int main() {

    const char* expr[] = {
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m)]",
        "a + (b - c)"
    };
    for (int i = 0; i < 3; i++) {

   printf("Expression: %s\n", expr[i]);
   
        if (isBalanced(expr[i])) {
            printf("Result: Balanced\n\n");

        } else {
            printf("Result: Not Balanced\n\n");
        }
    }

    return 0;
}

  