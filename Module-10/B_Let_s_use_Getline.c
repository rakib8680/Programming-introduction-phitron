// Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

// Hint: use function getline(cin, s).

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

// It's guaranteed that S will contain '\' symbol.

// Output
// Print the answer required above.

// Examples
// Input
// Egyptian collegiate programming\ contest
// Output
// Egyptian collegiate programming

#include <stdio.h>

int main()
{
    char arr[1000001];
    fgets(arr, 1000001, stdin);
    for (int i = 0; arr[i] != '\\'; i++)
    {

        printf("%c", arr[i]);
    }

    return 0;
}