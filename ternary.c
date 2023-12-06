#include<stdio.h>

// Write C program to check a number is even or odd using ternary operator.

void main(){
    int no;  
  
    printf("Enter an integer number\n");  
    scanf("%d", &no);  
  
    (no % 2 == 0) ? printf("This is Even Number"):printf("This is Odd Number"); 
}
