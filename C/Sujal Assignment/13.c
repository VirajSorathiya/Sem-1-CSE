#include <stdio.h>

int main(){

    int i,j,k;
    printf("Enter a Amount of a: ");
    scanf("%d" , &i);
    printf("Enter a Amount of b: ");
    scanf("%d" , &j);
    printf("Enter a Amount of c: ");
    scanf("%d" , &k);

    if(i >= j && i >= k){
        printf("%d is maximum amount" , i);
    }else if(j >= i && j >= k){
        printf("%d is maximum amount" , j);
    }else{
        printf("%d is maximum amount" , k);
    }
    return 0;

}