#include <stdio.h>

int main()
{
    char name[6] = "Rakib";
    int size = sizeof(name) / sizeof(name[0]); // size of array = total size of array / size of each element
    // size of array = 6/1 = 6
    // size of each element = 1 byte (char)
    // for int size = 4 bytes (int)

    for (int i = 0; i < 5; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n%s\n%d", name, size); // use "%s" inside printf to print array of char/string without loop

    return 0;
}

// notes
/*
1.Always put 1 extra size when declaring a string in C. Because C uses null character '\0' to terminate the string.
2. If you don't put 1 extra size, then it will not print the string properly. It will print garbage value.
3. In C, string is an array of characters. So, you can use array functions to manipulate strings.
4. Use "%s" inside printf to print array of char/string without loop.
5. Declare string like this
   char name[6] = "Rakib"; // 5 characters + 1 null character
   or
   char name[] = "Rakib"; // compiler will automatically allocate size for the string
   not like this
    char name[5] = "Rakib"; // this will not work properly because it will not allocate size for null character
    or
    char name[6] = {'R', 'a', 'k', 'i', 'b'}; // this will not work properly because it will not allocate size for null character
*/
