/*
Question 31: Delete node from any given position.
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

    for (int i = 1; i <= 3; i++) {

        t = malloc(sizeof(*t));

        t->data = i;

        t->next = head;

        head = t;

    }

    struct Node *p = head;

    p = p->next; /* delete second node */

    head->next = p->next;

    free(p);

    while (head) {

        printf(\"%d \", head->data);

        head = head->next;

    }

    return 0;

}

Output: 3 1
/* Expected Output:
3 1
*/
