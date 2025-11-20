/*
Question 39: Search an element in BST.
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

int search(struct Node* r, int x) {

    if (!r) return 0;

    if (r->data == x) return 1;

    if (x < r->data) return search(r->left, x);

    return search(r->right, x);

}

int main() {

    struct Node* root = newNode(5);

    root->left = newNode(3);

    root->right = newNode(7);

    printf(search(root, 3) ? \"Found\\n\" : \"Not Found\\n\");

    return 0;

}

Output: Found
/* Expected Output:
Found
*/
