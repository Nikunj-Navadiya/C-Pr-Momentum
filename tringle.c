#include<stdio.h>

//Write C program to input angles of a tringle and check whether tringle is valid or not.

void main(){
	int a,b,c,sum;
	printf("A Angles Tringle :- ");
	scanf("%d",&a);
	printf("B Angles Tringle :- ");
	scanf("%d",&b);
	printf("C Angles Tringle :- ");
	scanf("%d",&c);
	
	sum = a + b + c;
	
	if(sum == 180){
		printf("Tringle is Valid");
	}else{
		printf("Tringle is  Invalid");
	}
}
