#include<stdio.h>

int main(){

    int mul,div,num;

    printf("Enter Any Number : ");
    scanf("%d" , &num);

    mul = num << 1;
    div = num >> 1;

    printf("Multiply by 2 is = %d\n" , mul);
    printf("Divided by 2 is = %d" , div);

    return 0;
}