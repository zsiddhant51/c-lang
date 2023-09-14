#include <stdio.h>

unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int number;
    
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long fact = factorial(number);
        printf("Factorial of %d = %llu\n", number, fact);
    }
    
    return 0;
}
