#include<stdio.h>

int main(){

    int S1,S2,S3,Total,Percentage;
    printf("Enter a Marks Of Physics : ");
    scanf("%d", &S1);

    printf("Enter a Marks Of Physics : ");
    scanf("%d", &S2);

    printf("Enter a Marks Of Physics : ");
    scanf("%d", &S3);

    Total = S1+S2+S3;
//Per Subject 100 Marks.
    Percentage = (Total*100)/300;

    if(Percentage >= 70){
        printf("Distinction");
    }else if(Percentage >= 60 && Percentage <70){
        printf("Class : First Class");
    }else if(Percentage >= 50 && Percentage <= 60){
        printf("Class : Second Class");
    }else if(Percentage >= 40 && Percentage <= 50){
        printf("Class : Pass Class");
    }else{
        printf("You are Fail");
    }
    return 0;
}