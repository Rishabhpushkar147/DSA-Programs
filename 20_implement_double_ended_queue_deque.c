/*
Question 20: Implement double-ended queue (Deque).
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define MAX 100

int deq[MAX];

int front = -1, rear = -1;

int isEmpty() {

    return front == -1;

}

void insertFront(int x) {

    if (front == 0) {

        printf(\"Overflow\\n\");

        return;

    }

    if (isEmpty()) {

        front = rear = 0;

        deq[front] = x;

    } else {

        deq[--front] = x;

    }

}

void insertRear(int x) {

    if (rear == MAX - 1) {

        printf(\"Overflow\\n\");

        return;

    }

    if (isEmpty()) {

        front = rear = 0;

        deq[rear] = x;

    } else {

        deq[++rear] = x;

    }

}

int deleteFront() {

    if (isEmpty()) {

        printf(\"Underflow\\n\");

        return -1;

    }

    return deq[front++];

}

int deleteRear() {

    if (isEmpty()) {

        printf(\"Underflow\\n\");

        return -1;

    }

    return deq[rear--];

}

int main() {

    insertRear(1);

    insertFront(2);

    printf(\"%d\\n\", deleteRear());

    return 0;

}

Output: 1
/* Expected Output:
1
*/
