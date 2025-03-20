// Problem Statement

// You will be given an integer N. If N is a positive number then print from 1 to N, otherwise print from N to 0.

// Note: A positive number is a number that is strictly greater than 0.

// Input Format

// Input will contain only N.
// Constraints

// -10^5 <= N <= 10^5
// Output Format

// Output as asked in the question and don't forget to put a space between the values.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else if (n < 0)
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}