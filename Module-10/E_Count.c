// Given a string S. Print the summation of its digits.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

// It's guaranteed that S contains only digits from 0 to 9.

// Output
// Print the answer required above.

// Example
// Input
// 351
// Output
// 9

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000001];
    int sum = 0;
    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++)
    {
        sum += (arr[i] - '0');
    };

    printf("%d", sum);

    return 0;
}