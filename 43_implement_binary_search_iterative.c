/*
Question 43: Implement Binary Search (Iterative).
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int n;

    scanf(\"%d\", &n);

    int a[n];

    for (int i = 0; i < n; i++) scanf(\"%d\", &a[i]);

    int key;

    scanf(\"%d\", &key);

    int l = 0, r = n - 1;

    while (l <= r) {

        int m = (l + r) / 2;

        if (a[m] == key) {

            printf(\"Found at %d\\n\", m);

            return 0;

        }

        if (a[m] < key) l = m + 1;

        else r = m - 1;

    }

    printf(\"Not Found\\n\");

    return 0;

}

Output: Found at 3
/* Expected Output:
Found at 3
*/
