#include<stdio.h>

main(){
	
	int a;
	
	printf("enter a number to genrate its multiplication table :-");
	scanf("%d",&a);
	
	for(int i=1; i<=10; i++){
		
		printf("%d  *  %d  = %d\n",a ,i,a*i);
	}
	
	
	
}