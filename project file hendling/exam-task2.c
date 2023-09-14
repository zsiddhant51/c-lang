#include <stdio.h>


void printTable(int num) {
    printf("multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int number;
    
    printf("enter a number: ");
    scanf("%d", &number);
    
        printTable(number);
    
    return 0;
}
