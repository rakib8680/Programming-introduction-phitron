
// Write a program that inserts a given value at a specified position in an array of integers.

// Example:
// Input:
// 5
// 10 20 30 40 50
// 1 100

// Output:
// 10 100 20 30 40 50

#include <stdio.h>
int main()
{
    int n, pos, value;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };
    scanf("%d %d", &pos, &value);

    for (int i = n; i >= pos + 1; i--)
    {
        arr[i] = arr[i - 1];
    };

    arr[pos] = value;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}