#include<stdio.h>

int main(){

    int i,j;
    printf("Enter a: ");
    scanf("%d",&i);
    printf("Enter b: ");
    scanf("%d",&j);

    if(i <= j){
        printf("%d is Minimum" , i);
    }else{
        printf("%d is Minimum" , j);
    }

    return 0;
}