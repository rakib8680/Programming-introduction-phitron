#include <stdio.h>

int main()
{
    int ar[6];       // always use 1 more than the size for null terminator
    scanf("%s", ar); // you don't have to use & when inputting an array, though it'll work and use %s for strings
    printf("%s", ar);

    return 0;
}