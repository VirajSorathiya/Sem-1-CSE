#include<stdio.h>

int main(){

    int costPrice,sellingPrice,Loss,Profit;

    printf("Enter a costPrice : ");
    scanf("%d" , &costPrice);

    printf("Enter a sellingPrice : ");
    scanf("%d" , &sellingPrice);

    Loss = costPrice-sellingPrice;
    Profit =sellingPrice-costPrice;

    if(costPrice>sellingPrice){
        printf("Lost = %d" , Loss);
    }else if(sellingPrice>costPrice){
        printf("Profit = %d" , Profit);
    }else{w
        printf("No Profit or Loss");
    }
    return 0;
}