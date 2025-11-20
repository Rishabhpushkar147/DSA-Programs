/*
Question 38: Insert a node in Binary Search Tree (BST).
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

struct Node {

    int data;

    struct Node* left;

    struct Node* right;

};

struct Node* newNode(int x) {

    struct Node* n = malloc(sizeof(*n));

    n->data = x;

    n->left = n->right = NULL;

    return n;

}

struct Node* insert(struct Node* root, int x) {

    if (!root) return newNode(x);

    if (x < root->data) root->left = insert(root->left, x);

    else root->right = insert(root->right, x);

    return root;

}

int main() {

    struct Node* root = NULL;

    root = insert(root, 5);

    insert(root, 3);

    insert(root, 7);

    printf(\"Root=%d\\n\", root->data);

    return 0;

}

Output: Root=5
/* Expected Output:
Root=5
*/
