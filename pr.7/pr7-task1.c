#include <stdio.h>

int calculateSum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

main() {
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter %d elements:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	int sum = calculateSum(arr, size);
	printf("Sum of array elements: %d\n", sum);

}