#include<stdio.h>

int main(){

    char ch;
    printf("Enter Any Alphabet: ");
    scanf("%c" , &ch);

    ch = 'a','e','i','o','u','A','E','I','O','U';

    if(ch){
        printf("Alphabet is Vowel");
    }else{
        printf("Alphabet is Consonant");
    }
    return 0;
}