/*
Question 30: Delete node from end.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;

};

int main() {

    struct Node *head = malloc(sizeof(*head)), *second;

    head->data = 1;

    second = malloc(sizeof(*second));

    second->data = 2;

    head->next = second;

    second->next = NULL;

    struct Node *cur = head;

    while (cur->next->next) cur = cur->next;

    free(cur->next);

    cur->next = NULL;

    cur = head;

    while (cur) {

        printf(\"%d \", cur->data);

        cur = cur->next;

    }

    return 0;

}

Output: 1
/* Expected Output:
1
*/
