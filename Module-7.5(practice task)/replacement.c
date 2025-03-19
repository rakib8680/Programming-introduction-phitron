#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] = arr[i] > 0 ? 1 : arr[i] < 0 ? 2
                                             : arr[i];

        printf("%d ", arr[i]);
    };

    return 0;
}
