#include <stdio.h>
#include <string.h>

int main()
{
    char ar[17];
    // gets(ar );
    fgets(ar, 17, stdin);
    ar[16] = '\0';
    printf("%s", ar);

    return 0;
}

// gets() - is a built-in function that takes a string as input and stores it in the variable passed to it. It stops reading when it encounters a newline character or EOF. It is not safe to use because it doesn't check for buffer overflow, so it's better to use fgets() instead.
// fgets() - is a safer alternative to gets() as it allows you to specify the maximum number of characters to read, preventing buffer overflow. It also includes the newline character in the string if there is enough space in the buffer.

// rakib khan 2002
