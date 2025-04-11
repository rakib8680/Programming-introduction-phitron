#include <stdio.h>
#include <string.h>

int main()
{
    char name[200];
    scanf("%s", name);
    int count = 0;
    // for loop
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    };

    // while loop
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    };

    // built in func
    int length = strlen(name);

    printf("%d", length);

    return 0;
}