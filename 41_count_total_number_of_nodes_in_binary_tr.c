/*
Question 41: Count total number of nodes in binary tree.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* left;

    struct Node* right;

};

int countNodes(struct Node* r) {

    if (!r) return 0;

    return 1 + countNodes(r->left) + countNodes(r->right);

}

int main() {

    struct Node* root = malloc(sizeof(*root));

    root->left = malloc(sizeof(*root));

    root->right = NULL;

    root->left->left = NULL;

    root->left->right = NULL;

    printf(\"%d\\n\", countNodes(root));

    return 0;

}

Output: 2
/* Expected Output:
2
*/
