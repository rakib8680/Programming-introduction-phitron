
// Problem Statement

// You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

// Input Format

// First line will contain N.
// Second line will contain N values named V.
// Constraints

// 1 <= N <= 10^5
// -1000 <= V <= 1000
// Output Format

// Output the sum of positive numbers first, then sum of negative numbers.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int pos = 0;
    int neg = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        (arr[i] > 0) ? (pos += arr[i]) : (arr[i] < 0 ? (neg += arr[i]) : 0);
    };

    printf("%d %d", pos, neg);

    return 0;
}