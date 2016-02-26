#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "rand_bs.h"

int main(){

	position p_pos{ 1, 1, 1 }, a_pos{ 1, 1, 1 }, b_pos{ 1, 1, 3 }, c_pos{ 1, 1, 3 }, d_pos{ 1, 1, 4 };

	int ship_dir;

	int mx_size, my_size;

	//map size input
	printf("Choose a Map size: (x, y): ");
	scanf_s("%d %d", &mx_size, &my_size);

	//defining starting player position
	p_pos.x = mx_size / 2;
	p_pos.y = my_size / 2;

	//setting up enemy ship positions
	srand(time(NULL));

	while (a_pos.x == p_pos.x && a_pos.y == p_pos.y) {
		a_pos.x = rand() % mx_size;
		a_pos.y = rand() % my_size;
	}

	while (b_pos.x == a_pos.x && b_pos.y == a_pos.y || b_pos.x == p_pos.x && b_pos.y == p_pos.y){
		b_pos.x = rand() % mx_size;
		b_pos.y = rand() % my_size;
	}

	while (c_pos.x == a_pos.x && c_pos.y == a_pos.y || c_pos.x == b_pos.x && c_pos.y == b_pos.y || c_pos.x == p_pos.x && c_pos.y == p_pos.y) {
		c_pos.x = rand() % mx_size;
		c_pos.y = rand() % my_size;
	}

	while (d_pos.x == a_pos.x && d_pos.y == a_pos.y || d_pos.x == b_pos.x && d_pos.y == b_pos.y || d_pos.x == c_pos.x && d_pos.y == c_pos.y || d_pos.x == p_pos.x && d_pos.y == p_pos.y) {
		d_pos.x = rand() % mx_size;
		d_pos.y = rand() % my_size;
	}

	//Setting up map
	char* map = (char*)malloc(mx_size * my_size);

	for (int i = 0; i < mx_size * my_size; i++) {
		if (i == a_pos.x * a_pos.y) {
			ship_dir = rand() % 4 + 1;
		}
	}



	getchar();
	return 0;
}