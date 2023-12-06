#include<stdio.h>

//Write C program to find out max from 4 numbers using nested if.

void main(){
	int a,b,c,d;
	printf("A Enter Value :- ");
	scanf("%d",&a);
	printf("B Enter Value :- ");
	scanf("%d",&b);
	printf("C Enter Value :- ");
	scanf("%d",&c);
	printf("D Enter Value :- ");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is Big");
			}else{
				printf("D is Big");
			}
		}else{
			if(c>d){
				printf("C is Big");
			}else{
				printf("D is Big");
			}
		}
	}else{
		if(b>c){
			if(b>d){
				printf("B is Big");
			}else{
				printf("D is Big");
			}
		}else{
			if(c>d){
				printf("C is big");
			}else{
				printf("D is big");
			}
		}
	}
}
