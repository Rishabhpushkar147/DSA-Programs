/*
Question 5: Insert an element at a given position in an array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int n, i, pos, x;

    scanf(\"%d\", &n);

    int a[100];

    for (i = 0; i < n; i++) {

        scanf(\"%d\", &a[i]);

    }

    scanf(\"%d %d\", &pos, &x); /* pos: 0-based */

    for (i = n; i > pos; i--) {

        a[i] = a[i - 1];

    }

    a[pos] = x;

    n++;

    for (i = 0; i < n; i++) {

        printf(\"%d \", a[i]);

    }

    printf(\"\\n\");

    return 0;

}

Output: 1 2 3 4 -> insert 3 at pos 2 -> 1 2 3 3 4
/* Expected Output:
1 2 3 4 -> insert 3 at pos 2 -> 1 2 3 3 4
*/
