/*
Question 44: Implement Hashing using Modulus Method.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#define SIZE 10

int main() {

    int table[SIZE];

    for (int i = 0; i < SIZE; i++) table[i] = -1;

    int keys[5] = {12, 22, 42, 32, 52};

    for (int i = 0; i < 5; i++) {

        int h = keys[i] % SIZE;

        while (table[h] != -1) h = (h + 1) % SIZE;

        table[h] = keys[i];

    }

    for (int i = 0; i < SIZE; i++) printf(\"%d \", table[i]);

    printf(\"\\n\");

    return 0;

}

Output: -1 -1 12 -1 -1 52 -1 22 42 32
/* Expected Output:
-1 -1 12 -1 -1 52 -1 22 42 32
*/
