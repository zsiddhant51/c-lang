#include <stdio.h>

main()
{
    int i, j;
    
    for(i=5-1; i>=1; i--)
    {

        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        printf("*");

        for(j=1; j<=((5 - i ) * 2 - 1); j++)
        {
            printf(" ");
        }

        printf("*");

        printf("\n");
    }

}