/*
Question 49: Implement Merge Sort.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <stdlib.h>

void merge(int a[], int l, int m, int r) {

    int n1 = m - l + 1;

    int n2 = r - m;

    int L[n1], R[n2];

    int i, j, k;

    for (i = 0; i < n1; i++) L[i] = a[l + i];

    for (j = 0; j < n2; j++) R[j] = a[m + 1 + j];

    i = 0; j = 0; k = l;

    while (i < n1 && j < n2) {

        if (L[i] <= R[j]) a[k++] = L[i++];

        else a[k++] = R[j++];

    }

    while (i < n1) a[k++] = L[i++];

    while (j < n2) a[k++] = R[j++];

}

void mergeSort(int a[], int l, int r) {

    if (l < r) {

        int m = (l + r) / 2;

        mergeSort(a, l, m);

        mergeSort(a, m + 1, r);

        merge(a, l, m, r);

    }

}

int main() {

    int n;

    scanf(\"%d\", &n);

    int a[n];

    for (int i = 0; i < n; i++) scanf(\"%d\", &a[i]);

    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) printf(\"%d \", a[i]);

    printf(\"\\n\");

    return 0;

}

Output: 3 9 27 38 43
/* Expected Output:
3 9 27 38 43
*/
