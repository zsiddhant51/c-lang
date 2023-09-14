#include <stdio.h>

main() {
    int num1, num2, num3, num4, num5;
    
    
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    
//    int min;
    
    if (num1 < num2) {
    	if(num1 < num3){
    		if(num1 < num4){
    			if(num1 < num5){
    				printf("Minimum number is: %d\n", num1);
//        			min = num1;	
				}else{
					printf("Minimum number is: %d\n", num5);
//        			min = num5;			
				}
//        		min = num1;	
			}else{
				if(num4 < num5){
					printf("Minimum number is: %d\n", num4);
//        			min = num4;	
				}else{
					printf("Minimum number is: %d\n", num5);
//        			min = num5;			
				}
//        		min = num4;			
			}
//        min = num1;	
		}else{
			if(num3 < num4){
				if(num3 < num5){
					printf("Minimum number is: %d\n", num3);
//        			min = num3;	
				}else{
					printf("Minimum number is: %d\n", num5);
//        			min = num5;			
				}
//        		min = num3;	
			}else{
				if(num4 < num5){
					printf("Minimum number is: %d\n", num4);
//        			min = num4;	
				}else{
					printf("Minimum number is: %d\n", num5);
//        			min = num5;			
				}
//        		min = num4;			
			}
//        min = num3;			
		}
//        min = num1;
    } else {
    	if(num2 < num3){
    		if(num2 < num4){
    			if(num2 < num5){
    				printf("Minimum number is: %d\n", num2);
//        			min = num2;	
				}else{
					printf("Minimum number is: %d\n", num5);
//        			min = num5;			
				}
//        		min = num2;	
			}else{
				if(num4 < num5){
					printf("Minimum number is: %d\n", num4);
//        			min = num4;	
				}else{
					printf("Minimum number is: %d\n", num5);
//        			min = num5;			
				}
//        		min = num4;			
			}
//        min = num2;	
		}else{
			if(num3 < num4){
				if(num3 < num5){
					printf("Minimum number is: %d\n", num3);
//        			min = num1;	
				}else{
					printf("Minimum number is: %d\n", num5);
//        			min = num5;			
				}
//        		min = num3;	
			}else{
				if(num4 < num5){
					printf("Minimum number is: %d\n", num4);
//        			min = num4;	
				}else{
					printf("Minimum number is: %d\n", num5);
//        			min = num5;			
				}
//        		min = num4;			
			}
//        min = num3;			
		}
//        min = num2;
    }
}
