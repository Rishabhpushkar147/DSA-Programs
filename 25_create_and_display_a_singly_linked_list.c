/*
Question 25: Create and display a singly linked list.
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

    for (int i = 1; i <= 3; i++) {

        temp = malloc(sizeof(*temp));

        temp->data = i;

        temp->next = head;

        head = temp;

    }

    while (head) {

        printf(\"%d \", head->data);

        head = head->next;

    }

    return 0;

}

Output: 3 2 1
/* Expected Output:
3 2 1
*/
