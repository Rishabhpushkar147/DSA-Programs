/*
Question 15: Reverse a string using stack.
Source: DSA_50_Qs_C_Code_Final_BW.pdf
*/

#include <stdio.h>

#include <string.h>

int main() {

    char s[100];

    fgets(s, sizeof(s), stdin);

    int n = strlen(s);

    if (n > 0 && s[n-1] == '\\n') s[n-1] = '\\0', n--;

    char st[100];

    int top = -1;

    int i;

    for (i = 0; i < n; i++) {

        st[++top] = s[i];

    }

    for (i = 0; i < n; i++) {

        s[i] = st[top--];

    }

    s[n] = '\\0';

    printf(\"%s\\n\", s);

    return 0;

}

Output: hello -> olleh
/* Expected Output:
hello -> olleh
*/
