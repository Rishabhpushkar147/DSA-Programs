/*
Question 32: Search an element in a linked list.
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

    int key = 2;

    int found = 0;

    while (head) {

        if (head->data == key) {

            found = 1;

            break;

        }

        head = head->next;

    }

    if (found) printf(\"Found\\n\"); else printf(\"Not Found\\n\");

    return 0;

}

Output: Found
/* Expected Output:
Found
*/
