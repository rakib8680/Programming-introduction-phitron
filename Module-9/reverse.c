// Write a program that reads an array of integers, reverses the array, and prints the reversed array.

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 50 40 30 20 10

#include <stdio.h>

int main()
{

    int n, temp;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };

    int i = 0, j = n - 1;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    };

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// note- two pointers algorithm used here
