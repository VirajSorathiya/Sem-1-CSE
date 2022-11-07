#include <stdio.h>

int main(){

    int var1,var2,temp;

    printf("Enter First Integer: ");
    scanf("%d" , &var1);

    printf("Enter Secind Integer: ");
    scanf("%d" , &var2);

    temp = var1;
    var1 = var2;
    var2 = temp;
    
    printf("After Swapping First Variable:%d\n" , var1);
    printf("After Swapping Second Variable:%d" , var2);

    return 0;
}