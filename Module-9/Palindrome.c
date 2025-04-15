// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".

// Examples
// InputCopy
// abba
// Output
// YES
// Input
// icpcassiut
// Output
// NO

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    int len = strlen(str), i = 0, j = len - 1, isPalindrome = 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
        }
        i++;
        j--;
    };

    printf("%s", isPalindrome ? "YES" : "NO");

    return 0;
}