/*
Question 36: Implement preorder traversal.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* left;

    struct Node* right;

};

void preorder(struct Node* r) {

    if (!r) return;

    printf(\"%d \", r->data);

    preorder(r->left);

    preorder(r->right);

}

int main() {

    struct Node *root = malloc(sizeof(*root));

    root->data = 1;

    root->left = malloc(sizeof(*root));

    root->right = malloc(sizeof(*root));

    root->left->data = 2;

    root->right->data = 3;

    root->left->left = root->left->right = NULL;

    root->right->left = root->right->right = NULL;

    preorder(root);

    return 0;

}

Output: 1 2 3
/* Expected Output:
1 2 3
*/
