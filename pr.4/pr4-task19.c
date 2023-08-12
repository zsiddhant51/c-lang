#include<stdio.h>
 
 main(){
 	
 	int row, col;
 	
 	for(row=5; row>=1; row--){
 		
 		for(col=1; col<=row; col++){
 			
 			printf("%d",col);
 			
 			}
 			
 		for(col=4; col>=row; col--){
 			
 			printf(" ");
 			
 			}
 			
 		for(col=4; col>=row; col--){
 			
 			printf(" ");
 			
 			}
 			
 		for(col=row; col>=1; col--){
 			
 			printf("%d",col);
 			
 		    }
 		
 		printf("\n");
 		
 		}		
 		
 		
 	for(row=2; row<=5; row++){
 		
 		for(col=1; col<=row; col++){
 			
 			printf("%d",col);
 			
 			}
 			
 		for(col=4; col>=row; col--){
 			
 			printf(" ");
 			
 			}
 			
 		for(col=4; col>=row; col--){
 			
 			printf(" ");
 			
 			}
 			
 		for(col=row; col>=1; col--){
 			
 			printf("%d",col);
 			
 			}
 	 	
 		printf("\n");
 		
 		}		
 	
 	}