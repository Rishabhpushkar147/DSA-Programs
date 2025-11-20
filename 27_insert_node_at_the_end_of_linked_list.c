/*
Question 27: Insert node at the end of linked list.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;

};

int main() {

    struct Node *head = NULL, *temp, *last;

    temp = malloc(sizeof(*temp));

    temp->data = 5;

    temp->next = NULL;

    head = temp;

    last = temp;

    temp = malloc(sizeof(*temp));

    temp->data = 10;

    temp->next = NULL;

    last->next = temp;

    last = temp;

    while (head) {

        printf(\"%d \", head->data);

        head = head->next;

    }

    return 0;

}

Output: 5 10
/* Expected Output:
5 10
*/
