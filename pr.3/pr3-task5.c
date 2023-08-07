#include <stdio.h>

main() {
    int number, i, factorial;
        factorial = 1;

    printf("enter a positive integer: ");
    scanf("%d", &number);
    
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }
    
	printf("factorial of %d = %llu\n", number, factorial);

}
