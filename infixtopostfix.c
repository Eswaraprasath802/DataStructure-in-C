#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        return '\0';
    } else {
        return stack[top--];
    }
}

int priority(char ch) {
    if (ch == '(')
        return 0;
    else if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;
    else
        return -1;
}

int main() {
    char express[100], *e, x;

    printf("Enter the infix expression: ");
    scanf("%s", express);

    e = express;

    while (*e != '\0') {
        if (isalnum(*e)) {
            printf("%c", *e);  // operand goes directly to output
        }
        else if (*e == '(') {
            push(*e);
        }
        else if (*e == ')') {
            while ((x = pop()) != '(') {
                printf("%c", x);
            }
        }
        else { // operator
            while (top != -1 && priority(stack[top]) >= priority(*e)) {
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }

    // Empty the stack
    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}
