#include <stdio.h>

int main()
{
    char a[100], b[100]; // lexicographical comparison Algorithm
    scanf("%s %s", a, b);

    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A Choto");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B Choto");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A choto");
            break;
        }
        else
        {
            printf("B Chooto");
            break;
        }
    }

    return 0;
}