/*
Question 22: Simulate a queue using two stacks.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define MAX 100

int s1[MAX], s2[MAX], t1 = -1, t2 = -1;

void push1(int x) { s1[++t1] = x; }

int pop1() { if (t1 == -1) return -1; return s1[t1--]; }

void push2(int x) { s2[++t2] = x; }

int pop2() { if (t2 == -1) return -1; return s2[t2--]; }

void enqueue(int x) { push1(x); }

int dequeue() {

    if (t2 == -1) {

        while (t1 != -1) push2(pop1());

    }

    return pop2();

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
