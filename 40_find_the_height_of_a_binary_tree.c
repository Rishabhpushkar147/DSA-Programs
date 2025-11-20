/*
Question 40: Find the height of a binary tree.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* left;

    struct Node* right;

};

int height(struct Node* r) {

    if (!r) return 0;

    int l = height(r->left);

    int rr = height(r->right);

    return 1 + (l > rr ? l : rr);

}

int main() {

    struct Node* root = malloc(sizeof(*root));

    root->left = malloc(sizeof(*root));

    root->right = NULL;

    root->left->left = NULL;

    root->left->right = NULL;

    printf(\"%d\\n\", height(root));

    return 0;

}

Output: 2
/* Expected Output:
2
*/
