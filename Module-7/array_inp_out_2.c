#include <stdio.h>

int main()
{
    int roll_num[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &roll_num[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", roll_num[i]);
    }

    return 0;
}