/*
Question 7: Merge two arrays into one.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int n1, n2, i;

    scanf(\"%d\", &n1);

    int a[n1];

    for (i = 0; i < n1; i++) {

        scanf(\"%d\", &a[i]);

    }

    scanf(\"%d\", &n2);

    int b[n2];

    for (i = 0; i < n2; i++) {

        scanf(\"%d\", &b[i]);

    }

    for (i = 0; i < n1; i++) {

        printf(\"%d \", a[i]);

    }

    for (i = 0; i < n2; i++) {

        printf(\"%d \", b[i]);

    }

    printf(\"\\n\");

    return 0;

}

Output: 1 3 5 + 2 4 -> 1 3 5 2 4
/* Expected Output:
1 3 5 + 2 4 -> 1 3 5 2 4
*/
