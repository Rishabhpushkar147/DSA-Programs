/*
Question 19: Implement circular queue using array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define MAX 5

int q[MAX];

int front = -1, rear = -1;

int isFull() {

    return (front == 0 && rear == MAX - 1) || (rear == (front - 1) % (MAX - 1));

}

int isEmpty() {

    return front == -1;

}

void enqueue(int x) {

    if (isFull()) {

        printf(\"Overflow\\n\");

        return;

    }

    if (front == -1) {

        front = rear = 0;

        q[rear] = x;

        return;

    }

    rear = (rear + 1) % MAX;

    q[rear] = x;

}

int dequeue() {

    if (isEmpty()) {

        printf(\"Underflow\\n\");

        return -1;

    }

    int val = q[front];

    if (front == rear) front = rear = -1;

    else front = (front + 1) % MAX;

    return val;

}

int main() {

    enqueue(1);

    enqueue(2);

    enqueue(3);

    printf(\"%d\\n\", dequeue());

    return 0;

}

Output: 1
/* Expected Output:
1
*/
