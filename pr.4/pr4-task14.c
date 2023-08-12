#include<stdio.h>

main(){
	
	int row, col;
	
	for(row = 5; row >= 1; row--){
		
		for(col = 2; col <= row; col++){
			printf("   ");
		}
		
		for(col = row; col <= 5; col++){
			printf(" %d ",col);
		}
		
		printf("\n");
		
	}
	
}