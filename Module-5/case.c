#include <stdio.h>
#include <ctype.h>

int main()
{
    char word;
    scanf("%c", &word);

    if (islower(word))
    {
        word = toupper(word);
        printf("%c", word);
    }
    else if (isupper(word))
    {
        word = tolower(word);
        printf("%c", word);
    }

    return 0;
}