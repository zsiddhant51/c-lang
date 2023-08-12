#include<stdio.h>

main(){
	
	int row, col;
	
	for(row = 1; row <= 4; row++){
		
		for(col = 4; col >= row; col--){
			printf(" ");
		}
		
		for(col = 1; col <= row; col++){
			printf("%d",col);
		}
		
		printf("\n");
		
	}
	for(row = 1; row <= 5; row++){
		
		for(col = 2; col <= row; col++){
			printf(" ");
		}
		
		for(col = row; col <= 5; col++){
			printf("%d",col);
		}
		
		printf("\n");
		
	}
	
	
}