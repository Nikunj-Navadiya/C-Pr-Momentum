#include <stdio.h>

//Write C program to input any character and check whether it is alphabet, digit or special character.

void main(){
    char ch;
    printf("Enter any Character: ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("This is Alphabet");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("This is Digit");
    }
    else 
    {
        printf("This is Special Character");
    }
}
