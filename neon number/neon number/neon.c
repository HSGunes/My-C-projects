#include <stdio.h>
int check_neon_number(int x);
int main(void) {

	unsigned long long int num;


	printf("please enter a number for cheking is it neon: ");
	scanf_s("%llu", &num);


	if (check_neon_number(num) == 1) {
		printf("%llu is a neon number", num);
	}

	else
	{
		printf("%llu is not a neon number", num);
	}






	return 0;
}

 check_neon_number(int x) {

	int square_num = x * x;
	int result = 0;

	for (int i = square_num; i > 0; i = i / 10) {
	
		result += i % 10; 
	}


	if (result == x) {
		return 1;
	}
	else {
		return 0;
	}








}