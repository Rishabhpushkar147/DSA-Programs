/*
Question 1: Write a program to declare and initialize a 1D array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    int i;

    for (i = 0; i < 5; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");

    return 0;

}

Output: 1 2 3 4 5
/* Expected Output:
1 2 3 4 5
*/
