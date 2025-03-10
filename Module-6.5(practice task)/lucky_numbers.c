#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    if (num < 10 || num > 99)
    {
        return 0;
    }

    int firstDigit = num / 10;
    int lastDigit = num % 10;

    if (lastDigit == 0)
    {
        printf("YES");
    }
    else if (firstDigit % lastDigit == 0 || lastDigit % firstDigit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}