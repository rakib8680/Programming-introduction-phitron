#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int val = strcmp(a, b); // built in function for string comparison

    if (val < 0)
    {
        printf("A Smaller");
    }
    else if (val > 0)
    {
        printf("B Smaller");
    }
    else
    {
        printf("A & B Same");
    }
    // printf("%d", val);

    return 0;
}