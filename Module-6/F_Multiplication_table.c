#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {
        int sum = n * i;
        printf("%d * %d = %d\n", n, i, sum);
    }

    return 0;
}