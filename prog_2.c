#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int precedence(char sa) {
    if (sa == '^') return 3;
    if (sa == '*' || sa == '/') return 2;
    if (sa == '+' || sa == '-') return 1;
    return 0;
}
int isOperator(char c) {
    return c=='+'||c=='-'||c=='*'||c=='/'||c=='^';
}

void infixToPostfix(const char infix[], char postfix[]) {

    char stack[MAX]; int top = -1, k = 0;
    for (int i = 0; infix[i]; i++) {
        char c = infix[i];
        if (c == ' ') continue;
        if (isdigit(c)) { 
            postfix[k++] = c;
            while (isdigit(infix[i+1])) postfix[k++] = infix[++i];
            postfix[k++] = ' ';
        } 
        else if (c == '(') stack[++top] = c;
        else if (c == ')') {
            while (top >= 0 && stack[top] != '(') postfix[k++] = stack[top--], postfix[k++] = ' ';
            top--;
        } 
        else if (isOperator(c)) {

            while (top >= 0 && precedence(stack[top]) >= precedence(c) && c != '^')
                postfix[k++] = stack[top--], postfix[k++] = ' ';
            stack[++top] = c;
        }
    }
    while (top >= 0) postfix[k++] = stack[top--], postfix[k++] = ' ';
    postfix[k] = '\0';
}

double evalPostfix(const char postfix[]) {

    double stack[MAX]; int top = -1;
    for (int i = 0; postfix[i]; i++) {
        if (postfix[i] == ' ') continue;

        if (isdigit(postfix[i])) {
            double num = 0;

            while (isdigit(postfix[i])) num = num*10 + (postfix[i++] - '0');
            stack[++top] = num;

        } else if (isOperator(postfix[i])) {

            double b = stack[top--], a = stack[top--];
            switch (postfix[i]) {
                case '+': stack[++top] = a + b; break;
                case '-': stack[++top] = a - b; break;
                case '*': stack[++top] = a * b; break;
                case '/': stack[++top] = a / b; break;
                
            }
        }
    }
    return stack[top];
}

int main() {
    const char infix[] = "3 + 4 * 2";
    char postfix[MAX];

    infixToPostfix(infix, postfix);

    printf("Infix: %s\n", infix);

    printf("Postfix: %s\n", postfix);
    
    printf("Result: %.2lf\n", evalPostfix(postfix));

    return 0;
}
