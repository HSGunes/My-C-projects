#include <stdio.h>	
#define SIZE 10

int search_binary(int array[], int key, int low, int high);

int main(void) {


	int array[SIZE];
	for (int i = 0; i < SIZE; i++) {

		array[i] = i*i ;
	}
	int key = 0;
	printf("please enter a number ");
	scanf_s("%d", &key);


	if (search_binary(array, key, 0, 9) != -1) {

		printf("%d", search_binary(array, key, 0, 9));
		printf("founded\n");
	}
	else { printf("not founded\n"); }



	for (int i = 0; i < SIZE; i++) {

		printf("%d ", array[i]);
	}
	printf("%d", search_binary(array, key, 0, SIZE-1));





	return 0;
}



int search_binary(int array[], int key, int low, int high) {

	int mid;


	while (low <= high) {
		mid = (low + high) / 2;
			if (key == array[mid]) {

				return 1;
			}

			else if (key < array[mid]) {
				high = mid - 1;
			}
			else {

				low = mid + 1;
			}


	}



	return -1;
}





