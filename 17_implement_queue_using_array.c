/*
Question 17: Implement queue using array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define MAX 100

int q[MAX];

int front = -1, rear = -1;

void enqueue(int x) {

    if (rear == MAX - 1) {

        printf(\"Overflow\\n\");

        return;

    }

    if (front == -1) front = 0;

    q[++rear] = x;

}

int dequeue() {

    if (front == -1 || front > rear) {

        printf(\"Underflow\\n\");

        return -1;

    }

    return q[front++];

}

int main() {

    enqueue(1);

    enqueue(2);

    printf(\"%d\\n\", dequeue());

    return 0;

}

Output: 1
/* Expected Output:
1
*/
