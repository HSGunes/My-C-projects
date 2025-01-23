#include <stdio.h>






int check_prime(int x, int y);



int main(void) {



	check_prime(11, 12);



	return 0;
}




int check_prime(int x, int y) {
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;

	for (int i = min; i <= max; i++) {
		int counter = 0;
		for (int j = 2; j < i; j++) {

			if (i % j == 0 || i < 2) {
				counter++;
			}

		}
		if (counter == 0 && i >= 2) {
			printf("%2d \n", i);
		}


	}
}