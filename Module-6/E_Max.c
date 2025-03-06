#include <stdio.h>

int main()
{
    int n, num, max;
    scanf("%d", &n);
    scanf("%d", &max);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    };

    printf("%d", max);

    return 0;
}