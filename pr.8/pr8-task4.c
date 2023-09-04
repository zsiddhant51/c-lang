#include <stdio.h>


int stringLength(const char *str) {
    const char *ptr = str; 
    
    while (*ptr != '\0') {
        ptr++; 
    }

    return (int)(ptr - str);
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = stringLength(inputString);

    printf("Length of the string is: %d\n", length);

    return 0;
}