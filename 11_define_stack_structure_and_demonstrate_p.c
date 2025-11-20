/*
Question 11: Define stack structure and demonstrate push/pop operations.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define MAX 100

typedef struct {

    int items[MAX];

    int top;

} Stack;

void push(Stack *s, int x) {

    if (s->top == MAX - 1) return;

    s->items[++s->top] = x;

}

int pop(Stack *s) {

    if (s->top == -1) return -1;

    return s->items[s->top--];

}

int main() {

    Stack s;

    s.top = -1;

    push(&s, 10);

    push(&s, 20);

    printf(\"Pop: %d\\n\", pop(&s));

    printf(\"Pop: %d\\n\", pop(&s));

    return 0;

}

Output: Pop: 20 Pop: 10
/* Expected Output:
Pop: 20 Pop: 10
*/
