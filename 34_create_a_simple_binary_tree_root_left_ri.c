/*
Question 34: Create a simple binary tree (root, left, right).
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* left;

    struct Node* right;

};

int main() {

    struct Node *root = malloc(sizeof(*root));

    root->data = 1;

    root->left = malloc(sizeof(*root));

    root->right = malloc(sizeof(*root));

    root->left->data = 2;

    root->right->data = 3;

    printf(\"Root=%d Left=%d Right=%d\\n\", root->data, root->left->data, root->right->data);

    return 0;

}

Output: Root=1 Left=2 Right=3
/* Expected Output:
Root=1 Left=2 Right=3
*/
