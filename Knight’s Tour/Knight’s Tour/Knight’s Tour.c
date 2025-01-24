#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 8

static int board[SIZE][SIZE] = { 0 };
static int vertical[SIZE];
static int horizontal[SIZE];
static int currentX = 0;
static int currentY = 0;
static int counter = -1;
void knight(int num);
void potential_moves(void);
int print_board(void);
void choise(void);
int mina_index(void);

int control(void);
void turn(void);
 

int main(void) {
	srand(time(NULL));
	potential_moves();
	
	choise();
	
	
	do {
		choise();
		counter = -2;
		turn();



	} while (control());
	print_board();
	return 0;
}



int control(void) {
	if (counter == -65) { return 0; }
	return 1;
}
int	print_board(void) {
	

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%2d ",-1* board[i][j]);

		}
		puts("");
	}
	puts("");

	return 1;
}

void potential_moves(void) {

	horizontal[0] = 2; vertical[0] = -1;
	horizontal[1] = 1; vertical[1] = -2;
	horizontal[2] = -1; vertical[2] = -2;
	horizontal[3] = -2; vertical[3] = -1;
	horizontal[4] = -2; vertical[4] = 1;
	horizontal[5] = -1; vertical[5] = 2;
	horizontal[6] = 1; vertical[6] = 2;
	horizontal[7] = 2; vertical[7] = 1;

}
void choise(void) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			board[i][j] = 0;
		
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {

for (int num = 0; num < SIZE; num++)
{
	currentX = i;
	currentY = j;
		if (currentX + vertical[num] >= 0 && currentY + horizontal[num] >= 0) {
			if (currentX + vertical[num] < 8 && currentY + horizontal[num] < 8) {
				board[currentX][currentY]++;
			}
		}
	}

		}
	}
	
}




int mina_index(void) {
	 int min = 100;
	int result = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (currentX + vertical[i] >= 0 && currentY + horizontal[i] >= 0) {
			if (currentX + vertical[i] < 8 && currentY + horizontal[i] < 8) {
				if (min>=board[currentX+vertical[i]][currentY+horizontal[i]]&& board[currentX + vertical[i]][currentY + horizontal[i]]>0)
				{
					min = board[currentX + vertical[i]][currentY + horizontal[i]];
					result = i;
				}
			
			}
		}
	}
	return result;
}



void knight(int num	) {

	 
	if (counter>-44){
	num = mina_index();}
	else
	{
		num = rand() % 8;
	}
	if (currentX + vertical[num] >= 0&& currentY + horizontal[num] >= 0) {
		if (currentX + vertical[num] < 8 && currentY + horizontal[num] < 8) {
			currentX += vertical[num];

			currentY += horizontal[num];	
			
			if (board[currentX][currentY]>0)
	{		board[currentX][currentY] = counter;
			counter--;
			
			}
			else
			{
				currentX -= vertical[num];

				currentY -= horizontal[num];

			}

			
		}
	}
	

	


}
void turn(void) {
	
	currentX = 0;
	currentY = 0;
	
	board[0][0] = -1;
	for (int i = 0; i < 10000; i++)
	{
		knight(0);
		
		
		

	}



	
}