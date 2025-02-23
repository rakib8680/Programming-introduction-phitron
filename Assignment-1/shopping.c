// Problem Statement

// Alisa and you have gone out for shopping, and Alisa wants to buy a new pair of shoes for Eid. She has enough money to buy anything. However, Alisa will only buy shoes if you also buy a pair. And you will buy a pair of shoes if you can buy a Punjabi. That means, everything is depending on the Punjabi.

// You have decided that you will buy a Punjabi only if you have more than 1000 Taka. After purchasing the Punjabi the amount of your money will be reduced by 1000. Suppose you have 1600 taka with you, after buying the Punjabi you will have 600 taka left with you.

// Then you will only buy shoes if you have 500 Taka or more left with you. That means, if you can't buy your Punjabi you can't buy shoes.

// Now if I inform you the amount N Taka that your mother will give you, can you tell me what will happen next?

// If you buy a punjabi print "I will buy Punjabi".

// If you buy a pair of shoes print "I will buy new shoes"

// If Alisa buy a pair of shoes print "Alisa will buy new shoes"

// If no one can buy anything print "Bad luck!"

// Note: Don't forget to print new line after every line you print.

#include <stdio.h>

int main()
{

    int money;
    scanf("%d", &money);
    if (money > 1000)
    {
        printf("I will buy Punjabi\n");
        money -= 1000;
        if (money > 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}
