#include<stdio.h>

int main(){

    int rakib = 24,total;
    float korim = 30.4;
    char name = 'R';
    total = rakib + korim;
    printf("rakib = %d\n",rakib);
    printf("korim = %0.1f\n",korim);
    printf("total = %d\n",total);
    printf("name = %c\n",name);
    printf("Total =%d %0.1f %d %c",rakib,korim,total, name);

    return 0;
};




/* Format Specifier :--
* %d - it will print integer value
* %f - it will print float value
* %c - it will print character value
*/