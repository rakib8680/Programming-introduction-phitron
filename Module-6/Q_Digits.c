#include <stdio.h>

int main()
{
    int n, num;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        do
        {
            printf("%d ", num % 10);
            num = num / 10;

        } while (num != 0);

        printf("\n");
    }

    return 0;
}