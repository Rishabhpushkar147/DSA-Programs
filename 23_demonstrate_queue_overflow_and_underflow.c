/*
Question 23: Demonstrate queue overflow and underflow.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define MAX 2

int q[MAX], front = 0, rear = 0;

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

    enqueue(1);

    enqueue(2);

    enqueue(3);

    dequeue();

    dequeue();

    dequeue();

    return 0;

}

Output: Overflow Underflow
/* Expected Output:
Overflow Underflow
*/
