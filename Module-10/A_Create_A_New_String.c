// Given two strings S and T. Print 2 lines that contain the following in the same order:

// Print the length of S and T separated by space.
// Print a new string that contains S and T separated by a space.
// For more clarification see the example below.

// Input
// The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

// The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

// Output
// Print the answer required above.

// Examples
// Input
// LEVEL
// ONE
// Output
// 5 3
// LEVEL ONE

#include <stdio.h>

int main()
{
    char a[1001];
    char b[1001];
    int lenA = 0, lenB = 0;
    scanf("%s", a);
    scanf("%s", b);
    for (int i = 0; a[i] != '\0'; i++)
    {
        lenA++;
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        lenB++;
    };

    printf("%d %d\n", lenA, lenB);
    printf("%s %s\n", a, b);

    return 0;
}