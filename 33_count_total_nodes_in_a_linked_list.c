/*
Question 33: Count total nodes in a linked list.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;

};

int main() {

    struct Node *head = NULL, *t;

    for (int i = 1; i <= 4; i++) {

        t = malloc(sizeof(*t));

        t->data = i;

        t->next = head;

        head = t;

    }

    int cnt = 0;

    while (head) {

        cnt++;

        head = head->next;

    }

    printf(\"Count=%d\\n\", cnt);

    return 0;

}

Output: Count=4
/* Expected Output:
Count=4
*/
