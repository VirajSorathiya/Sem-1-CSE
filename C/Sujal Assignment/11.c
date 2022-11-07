#include<stdio.h>

int main(){

    int i,n;

    printf("Enter a digit: ");
    scanf("%d" , &n);

    for(i=1 ; i <=n ;i++){
        printf("\n%d" , i);
    }
    printf ("\nProgram is Ended....");

    return 0;
}