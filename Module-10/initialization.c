#include <stdio.h>

int main()
{
    char name[5] = "Rakib";
    for (int i = 0; i < 5; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n%s", name); // use "%s" inside printf to print array of char/string without loop

    return 0;
}