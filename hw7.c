#include <stdio.h>

int main(void) {
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int i, temp;

	int* aptr = &arr1[0]; 
	int* bptr = &arr2[0]; 

	for (i = 0; i < 6; i++) {
		temp = *aptr;
		*aptr = *bptr;
		*bptr = temp;

		aptr++;
		bptr++;
	}


	printf("after swap\narr1: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\narr2: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}

	return 0;
}
