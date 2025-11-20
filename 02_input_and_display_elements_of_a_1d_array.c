/*
Question 2: Input and display elements of a 1D array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int n, i;

    printf(\"Enter number of elements:\\n\");

    scanf(\"%d\", &n);

    int a[n];

    for (i = 0; i < n; i++) {

        scanf(\"%d\", &a[i]);

    }

    for (i = 0; i < n; i++) {

        printf(\"%d \", a[i]);

    }

    printf(\"\\n\");

    return 0;

}

Output: Example: 10 20 30 40 -> 10 20 30 40
/* Expected Output:
Example: 10 20 30 40 -> 10 20 30 40
*/
