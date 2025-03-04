#include <stdio.h>

int main()
{
    int i = 10;
    int x = i++;
    int y = ++i;
    printf("i-%d x-%d y-%d ", i, x, y);

    return 0;
}

/*
i++/i-- is post increment/decrement operator. It first assigns the value of i to the expression and then increments/decrements the value of i by 1.

++i/--i is pre increment/decrement operator. It first increments/decrements the value of i by 1 and then assigns the value of i to the expression.

*/