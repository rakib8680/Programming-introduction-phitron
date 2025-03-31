#include <stdio.h>

int main()
{
    int n = 5;
    char name[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &name[i]);
        printf("%c", name[i]);
    }

    return 0;
}