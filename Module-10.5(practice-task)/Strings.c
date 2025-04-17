// D. Strings
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given two strings A and B. Print three lines contain the following:

// The size of the string A and size of the string B separated by a space
// The string produced by concatenating A and B (A + B).
// The two strings separated by a single space respectively, after swapping their first character.
// For more clarification see the example below.

// Input
// The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

// The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

// Output
// Print the answer required above.

// Example
// Input
// abcd
// ef
// Output
// 4 2
// abcdef
// ebcd af

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[11], str2[11];
    scanf("%s %s", str1, str2);
    int len1 = strlen(str1), len2 = strlen(str2);

    // Declare a new character array to store the concatenated result of str1 and str2
    // The size is the sum of the lengths of the two strings plus 1 for the null terminator
    char newStr[len1 + len2 + 1];

    // Copy all characters from str1 into newStr
    for (int i = 0; i < len1; i++)
    {
        newStr[i] = str1[i];
    }

    // Continue copying characters from str2 into newStr, starting where str1 ended
    int i = len1; // Start index for str2 in newStr
    for (int j = 0; j < len2; j++)
    {
        newStr[i] = str2[j];
        i++;
    }

    // Add the null terminator to the end of newStr to make it a valid string
    newStr[i] = '\0';

    // Swap the first characters of str1 and str2
    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%d %d\n", len1, len2);
    printf("%s\n", newStr);
    printf("%s %s", str1, str2);

    return 0;
}