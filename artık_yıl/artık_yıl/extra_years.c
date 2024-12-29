#include <stdio.h>

int main(void) {

	int year;

	printf("Please enter a year");
	scanf_s("%d", &year);

	if (year > 0) {

		if (year % 4 == 0 && year % 100 != 0) {

			printf("%d is leap year", year);
		}

		else if (year % 400 == 0) {


			printf("%d is leap year", year);

		}
		else { printf("%d is not leap year", year); }




	}


	else { printf("pls correcté"); }




















	return 0;
}


