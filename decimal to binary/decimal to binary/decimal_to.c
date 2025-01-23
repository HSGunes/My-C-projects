#include <stdio.h>




long long int decimal_to_binary(int num);
int main(void) {
	int num;
	printf("please enter a number for decimal to binary :");
	scanf_s("%d", &num);
	printf("%lld", decimal_to_binary(num));






	return	0;
}
long long int decimal_to_binary(int num) {


	long long int temp,place=1,binary=0,numcopy = num;
	while (numcopy!=0) {
		temp = numcopy % 2;
		binary = (temp * place) + binary;
		numcopy /= 2;
		place *= 10;
	}

	return binary;

}
