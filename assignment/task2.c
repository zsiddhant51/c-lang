#include <stdio.h>

main() {
    int row, col;

    int exampleArray[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    row = sizeof(exampleArray) / sizeof(exampleArray[0]);
    col = sizeof(exampleArray[0]) / sizeof(exampleArray[0][0]);

    printf("Number of rows: %d\n", row);
    printf("Number of columns: %d\n", col);
    
}