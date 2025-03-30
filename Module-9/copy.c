// Write a program that merges two arrays  into a single array and prints the merged array.

// Example:
// Input:
// 5
// 10 20 30 40 50
// 3
// 60 70 80

// Output:
// 10 20 30 40 50 60 70 80

#include <stdio.h>

int main()
{

    int m;
    scanf("%d", &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    };

    int n;
    scanf("%d", &n);
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    };

    int newArr[m + n];
    for (int i = 0; i < m; i++)
    {
        newArr[i] = arr[i];
    };

    int i = m;
    for (int j = 0; j < n; j++)
    {
        newArr[i] = brr[j];
        i++;
    };

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", newArr[i]);
    }

    return 0;
}