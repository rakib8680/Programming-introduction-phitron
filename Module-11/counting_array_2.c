#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count[11] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d ", arr[i]);

        count[arr[i]]++;
    };

    for (int i = 0; i < n; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }

    return 0;
}