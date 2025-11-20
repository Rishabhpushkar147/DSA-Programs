/*
Question 26: Insert node at the beginning of linked list.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;

};

int main() {

    struct Node *head = NULL, *n = malloc(sizeof(*n));

    n->data = 10;

    n->next = head;

    head = n;

    printf(\"%d\\n\", head->data);

    return 0;

}

Output: 10
/* Expected Output:
10
*/
