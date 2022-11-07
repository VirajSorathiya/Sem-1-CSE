#include<stdio.h>
int main(){

    int i,j,k,ch;
    float a,b,c;

    printf("1.Input 2 Integer Values & Print It Sum.\n");
    printf("2.Input 2 Float Values & Print It Sum.\n");

    printf("Enter Your Choise : ");
    scanf("%d" , &ch);

    if(ch==1){

        printf("Enter 1st Integer Value : ");
        scanf("%d",&i);
        printf("Enter 2nd Integer Value : ");
        scanf("%d",&j);
        k = i + j;
        printf("Sum of Integer Value : %d" , k);
    }else{
        printf("Enter 1st Float Value : ");
        scanf("%f",&a);
        printf("Enter 2nd Float Value : ");
        scanf("%f",&b);
        c = a + b;
        printf("Sum of Float Value : %f" , c);
    }

    return 0;
}