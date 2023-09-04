#include <stdio.h>


void reverseArray(int *arr, int size) {
    int *start = arr; 
    int *end = arr + size - 1; 

    while (start < end) {
        
        int temp = *start;
        *start = *end;
        *end = temp;

        
        start++;
        end--;
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    int *ptr = arr; 
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i); 
    }

    reverseArray(arr, n);

    printf("Reversed array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    return 0;
}