#include<stdio.h>

//Write C program use switch statement create simple calculator
//press 1 sum
//press 2 min
//press 3 mul
//press 4 div

void main (){
	char ope;
  	int a, b;
  	
  	printf("Enter operator (+, -, *, /): ");
 	scanf("%c", &ope);
  
 	printf("A Enter value:- ");
  	scanf("%d", &a);
  	
  	printf("B Enter value:- ");
 	scanf("%d", &b);
  
  switch (ope) {
    case '+':
      printf("Total :- %d",a + b);
    break;
    case '-':
      printf("Total :- %d", a - b);
    break;
    case '*':
      printf("Total :- %d", a * b);
    break;
    case '/':
      printf("Total :- %d", a / b);
    break;
  }
}
