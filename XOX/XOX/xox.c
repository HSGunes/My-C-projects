#include <stdio.h>
#include <stdlib.h>
#include <time.h>

board_reset(char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = '_';

		}
	}
}
board_print(char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2c ", board[i][j]);

		}
		puts("");
	}
	puts("");
}
ai_player(char board[3][3]){
	int x = 1;
	puts("-----AI TURN------");
	while (x) {

		int dice1 = rand() % 3;
		int dice2 = rand() % 3;
		
		
		if (board[dice1][dice2] == '_')
		{
			
		if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == '_') {
			board[2][0] = 'O';
			x--;

		}
		else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == '_') {
			board[2][1] = 'O';
			x--;

		}
		else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == '_') {
			board[2][2] = 'O';
			x--;

		}
		else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == '_') {
			board[0][2] = 'O';
			x--;

		}
		else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == '_') {
			board[1][2] = 'O';
			x--;

		}
		else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == '_') {
			board[2][2] = 'O';
			x--;
			
		}
		else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == '_') {
			board[2][2] = 'O';
			x--;

		}
		else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == '_') {
			board[2][0] = 'O';
			x--;
		}
		else{board[dice1][dice2] = 'O';
			x--;}
		}
		
		
		
	}
	
}
int winner(char board[3][3]) {
	int x = 1;int counter = 0;
	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
		printf("Player Win");
		x--;
		return x;
	}
	else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
		printf("Player Win");
		x--;
		return x;
	}
	else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
		printf("Player Win");
		x--;
		return x;
	}
	else if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
		printf("Player Win");
		x--;
		return x;
	}
	else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
		printf("Player Win");
		x--;
		return x;
	}
	else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
		printf("Player Win");
		x--;
		return x;
	}
	else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
		printf("Player Win");
		x--;
		return x;
	}
	else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
		printf("Player Win");
		x--;
		return x;
	}

	else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
		printf("AI Player Win");
		x--;
		return x;
	}
	else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
		printf("AI Player Win");
		x--;
		return x;
	}
	else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
		printf("AI Player Win");
		x--;
		return x;
	}
	else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
		printf("AI Player Win");
		x--;
		return x;
	}
	else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
		printf("AI Player Win");
		x--;
		return x;
	}
	else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
		printf("AI Player Win");
		x--;
		return x;
	}
	else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
		printf("AI Player Win");
		x--;
		return x;
	}
	else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
		printf("AI Player Win");
		x--;
		return x;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] != '_') {
				
				counter++;
			}
		}
	}
	if (counter == 9) {

		printf("---------DRAW--------");
		x--;
			return x;
		
		

	}
}
player(char board[3][3]){
	int z = 1;
	while (z) {
		puts("------YOUR TURN-------");
		printf("%s", "Please enter a cordinate of X: ");
		int i=0;
		int j=0;
		scanf("%d %d",&i,&j);
		
		
		if (board[i][j] == '_' && i<3 && j<3 && i>=0 && j>=0) {
			board[i][j] = 'X';
			z--;
		}
		else
		{
			puts("please enter correct value like 1 0 (your range 0 to 2):");
		}
		
	}
}




int main(void) {


	
	
	
	char board[3][3] = { '_','_','_','_','_','_','_','_','_' };
	puts("--WELCOME MY XOX GAME--");

	board_print(board);
	
	while (winner(board)) {
		srand(time(NULL));
		player(board);
		board_print(board);
		if (winner(board) == 0) {
			int y;
			printf("\nif you want to continue pls enter -1: ");
			scanf("%d", &y);
			if (y == -1) {
				
				board_reset(board);
			}
			else { break; }
		}
		ai_player(board);
		board_print(board);
		if (winner(board) == 0) {
			int y;
			printf("\nif you want to continue pls enter -1: ");
			scanf("%d", &y);
			if (y == -1) {

				board_reset(board);
				board_print(board);
			}
			else { break; }
		}
		
	}
	

	return 0;
}