#include<stdio.h>

main(){
	
	int a=10, b=20, c=30, d=40, e=50;
	
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					printf("a is grater ");
				}
				else{
					printf("e is grater");
				}
			}
			else{
				if(d>e){
					printf("d is grater");
				}
				else{
					printf("e is grater");
				}
			}
		}
		else{
			if(c>d){
				if(c>e){
					printf("c is grater");
				}
				else{
					printf("e is grater");
				}
			}
			else{
				if(d>e){
					printf("d is grater");
				}
				else{
					printf("e is grater");
				}
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				if(b>e){
					printf("b is grater");
				}
				else{
					printf("e is grater");
				}
			}
			else{
				if(d>e){
					printf("d is grater");
				}
				else{
					printf("e is grater");
				}
			}
		}
		else{
			if(c>d){
				if(c>e){
					printf("c is grater");
				}
				else{
					printf("e is grater");
				}
			}
			else{
				if(d>e){
					printf("d is grater");
				}
				else{
					printf("e is grater");
				}
			}
		}
	}
}