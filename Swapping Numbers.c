#include<stdio.h>
int main()
{
	int a,b,c;     //variable delcaration
	printf("Enter The Number 1: ");  
	scanf("%d",&a);  //input of number
	printf("Enter The Number 2: ");
	scanf("%d",&b);  //input of number
	printf("Before Swapping a= %d and b= %d\n",a,b);
	c=a*b;       //a variable c which stores a*b
	a=c/a;       //this does the swapping by logic of multiplication
	b=c/b;       //swapping
	printf("After Swapping a= %d and b= %d",a,b);
	return 0;
}

