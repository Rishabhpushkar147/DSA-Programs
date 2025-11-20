/*
Question 29: Delete node from beginning.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;

};

int main() {

    struct Node *head = malloc(sizeof(*head));

    head->data = 1;

    struct Node *n = malloc(sizeof(*n));

    n->data = 2;

    head->next = n;

    n->next = NULL;

    struct Node *t = head;

    head = head->next;

    free(t);

    printf(\"%d\\n\", head->data);

    return 0;

}

Output: 2
/* Expected Output:
2
*/
