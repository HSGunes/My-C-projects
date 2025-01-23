#include <stdio.h>
#include <stdlib.h>
int palindrom_test(int x) {
	
	int num_copy = x;
	int result = 0;
	while (num_copy != 0) {

		result = result * 10 + num_copy % 10;
		num_copy /= 10;


	}
	if (x == result) {
		printf("%d\n", result);
		return 1,result;
	}
	else { return 0; }


}








int main(void) {
	while (1) {if(palindrom_test(rand()%100000)!=0){
		}
	}





	return 0;
}