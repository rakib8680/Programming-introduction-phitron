#include <stdio.h>

int main()
{
    int a, b, c, min, max;
    scanf("%d %d %d", &a, &b, &c);
    min = a, max = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("%d %d", min, max);

    return 0;
}