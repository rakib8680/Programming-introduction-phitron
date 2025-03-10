#include <stdio.h>

int main()
{

    char letter, nextLetter;
    scanf("%c", &letter);

    if (letter >= 97 && letter < 122)
    {
        nextLetter = letter + 1;
    }
    else if (letter == 122)
    {
        nextLetter = 97;
    }

    printf("%c", nextLetter);

    return 0;
}