// G. Conversion
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given a string S. Print the origin string after replacing the following:

// Replace every comma character ',' with a space character.
// Replace every capital character in S with its respective small character and Vice Versa.
// Input
// Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

// Output
// Print the string after the conversion.

// Example
// Input
// happy,NewYear,enjoy
// Output
// HAPPY nEWyEAR ENJOY

#include <stdio.h>

int main()
{
    char arr[100001];
    scanf("%s", arr);

    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (arr[i] == ',')
        {
            arr[i] = ' ';
        }

        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }

        printf("%c", arr[i]);
    }

    return 0;
}