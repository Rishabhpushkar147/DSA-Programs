/*
Question 37: Implement postorder traversal.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* left;

    struct Node* right;

};

void postorder(struct Node* r) {

    if (!r) return;

    postorder(r->left);

    postorder(r->right);

    printf(\"%d \", r->data);

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

    postorder(root);

    return 0;

}

Output: 2 3 1
/* Expected Output:
2 3 1
*/
