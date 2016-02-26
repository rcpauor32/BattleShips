
#include "Battleships.h"


int main(){

	position shoot_pos;

	int All_ships = 0;

	int A_ship, B_ship, C_ship, D_ship;
	A_ship = B_ship = C_ship = D_ship = 0;

	while (All_ships < 11) {

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (hit_board[i][j]) {
					printf("%c ", board[i][j]);
				}
				else {
					printf("* ");
				}
			}
			printf("\n");
		}

		printf("\nWhere do you want to shoot? (x and y coord.): ");

		scanf_s("%d %d", &shoot_pos.x, &shoot_pos.y);

		if (hit_board[shoot_pos.y][shoot_pos.x]) {
			printf("\n\nYou've already hit this tile!\n");
		}
		else {

			hit_board[shoot_pos.y][shoot_pos.x] = 1;

			switch (board[shoot_pos.y][shoot_pos.x]) {
			case 'A': printf("\nHit!\n");
				A_ship++;
				All_ships++;
				break;
			case 'B': printf("\nHit!\n");
				B_ship++;
				All_ships++;
				break;
			case 'C': printf("\nHit!\n");
				C_ship++;
				All_ships++;
				break;
			case 'D': printf("\nHit!\n");
				D_ship++;
				All_ships++;
				break;
			case ' ': printf("\nMiss!\n");
				break;
			}

		}

		if (A_ship == 1){
			printf("\nThe A Ship has been SLAIN!\n");
			A_ship--;
		}
		if (B_ship == 2) {
			printf("\nThe B Ship has been SLAIN!\n");
			B_ship--;
		}
		if (C_ship == 3){
			printf("\nThe C Ship has been SLAIN!\n");
			C_ship--;
		}

	if (D_ship == 4){
		printf("\nThe D Ship has been SLAIN!\n");
		D_ship--;
	}
}		

	getchar();

	system("CLS");
	printf("\nCONGRATULATIONS!\nAll Ships have been destroyed!\n");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (hit_board[i][j]) {
				printf("%c ", board[i][j]);
			}
			else {
				printf("* ");
			}
		}
		printf("\n");
	}

	printf("\nPress any key to continue...");

	getchar();

	system("CLS");

	printf("\n\n\n\n\n\t\t\t\tYOU ROCK! :D\n\t\t\t\t    Bye");

	getchar();
	return 0;
}