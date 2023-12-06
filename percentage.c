#include<stdio.h>

//Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following

void main(){
	float phy, chem, bio, math, com, per;
	
	printf("Physics subjects marks :- ");
	scanf("%f",&phy);
	printf("Chemistry subjects marks :- ");
	scanf("%f",&chem);
	printf("Biology subjects marks :- ");
	scanf("%f",&bio);
	printf("Mathematics subjects marks :- ");
	scanf("%f",&math);
	printf("Computer subjects marks :- ");
	scanf("%f",&com);
	
	per = (phy + chem + bio + math + com) / 5;

    printf("Percentage = %.2f\n", per);
    
    if(per >= 90){
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}
