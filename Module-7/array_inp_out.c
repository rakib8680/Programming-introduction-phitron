#include <stdio.h>

int main()
{
    int numbers[5];

    numbers[1] = 44;
    numbers[0] = 55;
    numbers[5] = 99;
    numbers[2] = 11;

    printf("%d %d %d %d", numbers[1], numbers[2], numbers[0], numbers[5]);

    return 0;
}