#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int firstDig = num / 1000;
    if (firstDig % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}