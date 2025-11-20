/*
Question 16: Define and demonstrate basic queue operations (enqueue/dequeue).
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define MAX 50

int q[MAX];

int front = 0, rear = 0;

void enqueue(int x) {

    if (rear == MAX) {

        printf(\"Overflow\\n\");

        return;

    }

    q[rear++] = x;

}

int dequeue() {

    if (front == rear) {

        printf(\"Underflow\\n\");

        return -1;

    }

    return q[front++];

}

int main() {

    enqueue(10);

    enqueue(20);

    printf(\"%d\\n\", dequeue());

    printf(\"%d\\n\", dequeue());

    return 0;

}

Output: 10 20
/* Expected Output:
10 20
*/
