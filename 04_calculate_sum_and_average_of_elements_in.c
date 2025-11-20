/*
Question 4: Calculate sum and average of elements in an array.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

int main() {

    int n, i;

    scanf(\"%d\", &n);

    int a[n];

    long sum = 0;

    for (i = 0; i < n; i++) {

        scanf(\"%d\", &a[i]);

        sum += a[i];

    }

    printf(\"Sum=%ld\\n\", sum);

    printf(\"Average=%.2f\\n\", (double)sum / n);

    return 0;

}

Output: Sum=30 Average=7.50
/* Expected Output:
Sum=30 Average=7.50
*/
