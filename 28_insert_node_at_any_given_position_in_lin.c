/*
Question 28: Insert node at any given position in linked list.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;

};

int main() {

    struct Node *head = NULL, *temp;

    temp = malloc(sizeof(*temp));

    temp->data = 1;

    temp->next = NULL;

    head = temp;

    struct Node *n = malloc(sizeof(*n));

    n->data = 2;

    n->next = head->next;

    head->next = n;

    while (head) {

        printf(\"%d \", head->data);

        head = head->next;

    }

    return 0;

}

Output: 1 2
/* Expected Output:
1 2
*/
