/*
Question 12: Implement stack using array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define MAX 50

int stack[MAX];

int top = -1;

void push(int x) {

    if (top == MAX - 1) {

        printf(\"Overflow\\n\");

        return;

    }

    stack[++top] = x;

}

int pop() {

    if (top == -1) {

        printf(\"Underflow\\n\");

        return -1;

    }

    return stack[top--];

}

int main() {

    push(5);

    push(6);

    printf(\"%d\\n\", pop());

    printf(\"%d\\n\", pop());

    return 0;

}

Output: 6 5
/* Expected Output:
6 5
*/
