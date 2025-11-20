/*
Question 35: Implement inorder traversal.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* left;

    struct Node* right;

};

void inorder(struct Node* r) {

    if (!r) return;

    inorder(r->left);

    printf(\"%d \", r->data);

    inorder(r->right);

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

    inorder(root);

    return 0;

}

Output: 2 1 3
/* Expected Output:
2 1 3
*/
