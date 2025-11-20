/*
Question 14: Check stack overflow and underflow conditions.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define MAX 2

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

    push(1);

    push(2);

    push(3); /* causes overflow */

    pop();

    pop();

    pop(); /* causes underflow */

    return 0;

}

Output: Overflow Underflow
/* Expected Output:
Overflow Underflow
*/
