#include <stdio.h>

int main()
{
    int n, lowest, index;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    lowest = arr[0];
    index = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            index = i + 1;
        }
    }

    printf("%d %d", lowest, index);

    return 0;
}