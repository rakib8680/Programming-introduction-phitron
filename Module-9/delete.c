// Write a program that deletes an element from a specified position in an array of integers.

// Example:
// Input:
// 5
// 10 20 30 40 50
// 1

// Output:
// 10 30 40 50

#include <stdio.h>
int main()
{
    int n, pos;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    };

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}