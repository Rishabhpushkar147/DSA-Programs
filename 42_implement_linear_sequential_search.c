/*
Question 42: Implement Linear (Sequential) Search.
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

    for (int i = 0; i < n; i++) {

        if (a[i] == key) {

            printf(\"Found at %d\\n\", i);

            return 0;

        }

    }

    printf(\"Not Found\\n\");

    return 0;

}

Output: Found at 2
/* Expected Output:
Found at 2
*/
