/*
Question 3: Find the largest and smallest element in an array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int n, i;

    scanf(\"%d\", &n);

    int a[n];

    for (i = 0; i < n; i++) {

        scanf(\"%d\", &a[i]);

    }

    int max = a[0];

    int min = a[0];

    for (i = 1; i < n; i++) {

        if (a[i] > max) {

            max = a[i];

        }

        if (a[i] < min) {

            min = a[i];

        }

    }

    printf(\"Max=%d\\n\", max);

    printf(\"Min=%d\\n\", min);

    return 0;

}

Output: Max=9 Min=1
/* Expected Output:
Max=9 Min=1
*/
