#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 7

int main(void) {
	srand(time(NULL));
	int frequancy[7] = { 0 };
for (int i=0;i<60000000;i++){
	int dice = 1+rand()%6;
	frequancy[dice] += 1;


}printf("face		frequancy\n");
for (int j = 1; j < SIZE; j++) {
	
	printf("%d %20d\n",j,frequancy[j]);
}
	
















	return 0;
}