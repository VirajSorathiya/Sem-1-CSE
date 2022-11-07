#include <stdio.h>

int main(){

    int qty,rate,price;
    printf("Enter a Quantity : ");
    scanf("%d" , &qty);

    printf("Enter a Rate : ");
    scanf("%d" , &rate);

    price = qty*rate;
    printf("Price is : %d" , price);

    return 0;

}