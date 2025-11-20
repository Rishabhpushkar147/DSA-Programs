/*
Question 6: Delete an element from an array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int n, i, pos;

    scanf(\"%d\", &n);

    int a[100];

    for (i = 0; i < n; i++) {

        scanf(\"%d\", &a[i]);

    }

    scanf(\"%d\", &pos); /* index to delete (0-based) */

    for (i = pos; i < n - 1; i++) {

        a[i] = a[i + 1];

    }

    n--;

    for (i = 0; i < n; i++) {

        printf(\"%d \", a[i]);

    }

    printf(\"\\n\");

    return 0;

}

Output: 1 2 3 4 5 -> delete pos 1 -> 1 3 4 5
/* Expected Output:
1 2 3 4 5 -> delete pos 1 -> 1 3 4 5
*/
