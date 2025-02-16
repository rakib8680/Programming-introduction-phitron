#include<stdio.h>

int main(){

    int a=30, b=20;
    int sum = a+b;
    int mns = b-a;
    int mul = a*b;
    int div = a/b; // division of two integers will always be an integer
    float div2 = a*1.0/b; //make one of the operand float to get the float result
    int mod = a%b; //modulus operator gives the remainder of the division
    printf("%d\n%d\n%d\n%d\n%0.2f\n%d",sum,mns,mul,div,div2,mod);


    return 0;
}