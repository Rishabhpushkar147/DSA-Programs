/*
Question 10: Multiply two matrices.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int r1, c1, r2, c2, i, j, k;

    scanf(\"%d %d\", &r1, &c1);

    int A[r1][c1];

    for (i = 0; i < r1; i++) {

        for (j = 0; j < c1; j++) {

            scanf(\"%d\", &A[i][j]);

        }

    }

    scanf(\"%d %d\", &r2, &c2);

    int B[r2][c2];

    for (i = 0; i < r2; i++) {

        for (j = 0; j < c2; j++) {

            scanf(\"%d\", &B[i][j]);

        }

    }

    if (c1 != r2) {

        printf(\"Incompatible\\n\");

        return 0;

    }

    int C[r1][c2];

    for (i = 0; i < r1; i++) {

        for (j = 0; j < c2; j++) {

            C[i][j] = 0;

            for (k = 0; k < c1; k++) {

                C[i][j] += A[i][k] * B[k][j];

            }

        }

    }

    for (i = 0; i < r1; i++) {

        for (j = 0; j < c2; j++) {

            printf(\"%d \", C[i][j]);

        }

        printf(\"\\n\");

    }

    return 0;

}

Output: 19 22 43 50
/* Expected Output:
19 22 43 50
*/
