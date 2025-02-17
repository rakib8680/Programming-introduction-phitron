#include<stdio.h>


int main(){

    int taka;
    scanf("%d", &taka);

    if(taka >= 100){
        printf("You are rich\n");
    }else if(taka >= 50){
        printf("You are middle class\n");
    }else if(taka >= 10){
        printf("You are poor\n");\
    }else{
        printf("You are very poor\n");
    }

    return 0;
}