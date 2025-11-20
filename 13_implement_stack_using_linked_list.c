/*
Question 13: Implement stack using linked list.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;

};

struct Node* top = NULL;

void push(int x) {

    struct Node* n = malloc(sizeof(*n));

    n->data = x;

    n->next = top;

    top = n;

}

int pop() {

    if (!top) return -1;

    int v = top->data;

    struct Node* t = top;

    top = top->next;

    free(t);

    return v;

}

int main() {

    push(1);

    push(2);

    printf(\"%d\\n\", pop());

    printf(\"%d\\n\", pop());

    return 0;

}

Output: 2 1
/* Expected Output:
2 1
*/
