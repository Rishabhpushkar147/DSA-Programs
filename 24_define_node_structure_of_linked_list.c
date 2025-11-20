/*
Question 24: Define node structure of linked list.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

struct Node {

    int data;

    struct Node* next;

};

int main() {

    struct Node n;

    n.data = 5;

    n.next = NULL;

    printf(\"%d\\n\", n.data);

    return 0;

}

Output: 5
/* Expected Output:
5
*/
