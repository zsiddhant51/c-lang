#include<stdio.h>

main (){
	int a=30, b=75;

	printf("\n\n\n\nbefore swap a=%d b=%d",a,b);

	a= a-b;
	
	b= a+b;
	
	a= b-a;
	
	printf("\nafter swap a=%d b=%d",a,b);
}