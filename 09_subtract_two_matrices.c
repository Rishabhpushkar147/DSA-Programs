/*
Question 9: Subtract two matrices.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int r, c, i, j;

    scanf(\"%d %d\", &r, &c);

    int A[r][c], B[r][c];

    for (i = 0; i < r; i++) {

        for (j = 0; j < c; j++) {

            scanf(\"%d\", &A[i][j]);

        }

    }

    for (i = 0; i < r; i++) {

        for (j = 0; j < c; j++) {

            scanf(\"%d\", &B[i][j]);

        }

    }

    for (i = 0; i < r; i++) {

        for (j = 0; j < c; j++) {

            printf(\"%d \", A[i][j] - B[i][j]);

        }

        printf(\"\\n\");

    }

    return 0;

}

Output: 4 4 4 4
/* Expected Output:
4 4 4 4
*/
