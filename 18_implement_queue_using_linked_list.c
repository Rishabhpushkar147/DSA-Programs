/*
Question 18: Implement queue using linked list.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;

};

struct Node *front = NULL, *rear = NULL;

void enqueue(int x) {

    struct Node* n = malloc(sizeof(*n));

    n->data = x;

    n->next = NULL;

    if (!rear) front = rear = n;

    else { rear->next = n; rear = n; }

}

int dequeue() {

    if (!front) return -1;

    int v = front->data;

    struct Node* t = front;

    front = front->next;

    if (!front) rear = NULL;

    free(t);

    return v;

}

int main() {

    enqueue(5);

    enqueue(6);

    printf(\"%d\\n\", dequeue());

    return 0;

}

Output: 5
/* Expected Output:
5
*/
