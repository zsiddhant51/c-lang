#include <stdio.h>

main() {
    char dfc;

    printf("Enter the first letter of the day (example 'M for Monday'): ");
    scanf(" %c", &dfc);

    switch (dfc) {
        case 'M':
        case 'm':
            printf("Monday\n");
            break;
        case 'T':
        case 't':
            printf("Tuesday\n");
             printf("Thursday\n");
            break;
        case 'W':
        case 'w':
            printf("Wednesday\n");
            break;
        case 'F':
        case 'f':
            printf("Friday\n");
            break;
        case 'S':
        case 's':
            printf("Saturday\n");
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }
}