#include <stdio.h>
void kalp_üst() {
	for (int i = 4; i <= 9; i++) {

		for (int k = 0; k < 9 - i; k++) {

			printf(" ");
		}
		for (int j = 1; j <= 2 * i - j; j++) {
			printf("%s", "*");
		}
		for (int j = 1; j <= 2 * i - j; j++) {
			printf("%s", "*");
		}
		for (int k = 0; k <= 9 - i; k++) {

			printf(" ");

		}
		for (int k = 0; k < 9 - i; k++) {

			printf(" ");
		}
		for (int j = 1; j <= 2 * i - j; j++) {
			printf("%s", "*");
		}
		for (int j = 1; j <= 2 * i - j; j++) {
			printf("%s", "*");
		}
		puts("");
	}
}
void kalp_alt() {
	for (int i = 34; i > 10; i --) {
		for (int j = 1; j < i-15; j++) {
			printf("%s", "*");
		}
		for (int j = 1; j < i - 14; j++) {
			printf("%s", "*");
		}
		puts("");
		for (int k = 0; k < 35 - i; k++) {

		printf(" ");
	}
	}puts("");
	

}
int main(void) {
	
	
	
	kalp_üst();
	kalp_alt();











		return 0;
}