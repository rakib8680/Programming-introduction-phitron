#include <stdio.h>

int main()
{

    int taka;
    scanf("%d", &taka);
    if (taka >= 5000)
    {
        printf("I'll go to Cox's Bazar\n");
        if (taka >= 10000)
        {
            printf("I'll go to Saint Marting\n");
        }
        else
        {
            printf("I'll come back home\n");
        }
    }
    else
    {
        printf("I won't go anywhere\n");
    }

    return 0;
}