#include <stdio.h>

main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 2 == 0)
	
	? 
		printf("number is even.\n", number)
	:
		printf("number is odd.\n", number);
}
