#include <stdio.h>

int main()
{

    int i;
    int sum = 0;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        sum += i;
        // printf("%d\n",sum);
    };
    printf("The sum of numbers from 1 to %d is:- %d", n, sum);

    return 0;
}