#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int oddSum = 0;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d even \n", i);
            sum += i;
        }
        else
        {
            printf("%d odd \n", i);
            oddSum += i;
        }
    }

    printf("sum of even- %d \n", sum);
    printf("sum of odd- %d", oddSum);

    return 0;
}