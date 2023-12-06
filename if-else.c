#include<stdio.h>

//Write C program use ledder if else simple calculator.
//press 1 sum
//press 1 sum
//press 2 min
//press 3 mul
//press 4 div

void main (){
	char ope;
  	int a, b;
  	
  	printf("Enter operator (+, -, *, /): ");
 	scanf("%c", &ope);
  
 	printf("Enter value A :- ");
  	scanf("%d", &a);
  	
  	printf("Enter value B :- ");
 	scanf("%d", &b);
 	
 	if(ope == '+') {
        printf("Total :- %d",a + b);
    }else if(ope == '-') {
        printf("Total :- %d",a - b);
    }else if(ope == '*') {
        printf("Total :- %d",a * b);
    }else if(ope == '/') {
        printf("Total :- %d",a / b);
    }else{
        printf("Invalid Input");
    }
}
