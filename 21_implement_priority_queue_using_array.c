/*
Question 21: Implement priority queue using array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int n = 5;

    int pq[5] = {3, 5, 1, 4, 2};

    int i, j;

    for (i = 0; i < n - 1; i++) {

        for (j = i + 1; j < n; j++) {

            if (pq[i] < pq[j]) {

                int t = pq[i];

                pq[i] = pq[j];

                pq[j] = t;

            }

        }

    }

    for (i = 0; i < n; i++) {

        printf(\"%d \", pq[i]);

    }

    printf(\"\\n\");

    return 0;

}

Output: 5 4 3 2 1
/* Expected Output:
5 4 3 2 1
*/
