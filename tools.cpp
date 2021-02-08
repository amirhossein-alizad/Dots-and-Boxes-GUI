#include <stdio.h>
#include "bgi/graphics.h"
#include "tools.h"
void tools(int turn, int *x, int *y, int *z, int points1, int points2, int color1, int color2)
{/*this function shows the options in the middle of the game and gets the coordinates from the user*/
	char PLAYER1[25], PLAYER2[25];
	sprintf(PLAYER1, "PLAYER1's POINTS:%d", points1);
	sprintf(PLAYER2, "PLAYER2's POINTS:%d", points2);
	setcolor(color1);
	setbkcolor(WHITE);
	outtextxy(400, 690, PLAYER1);
	setcolor(color2);
	setbkcolor(WHITE);

	outtextxy(400, 720, PLAYER2);
	setcolor(BLACK);
	setbkcolor(WHITE);
	outtextxy(400, 750, "ENTER \"0 0 0\" TO RESTART ");
	setcolor(BLACK);
	setbkcolor(WHITE);
	outtextxy(400, 780, "ENTER \"0 0 1\" TO RETURN TO MAIN MENU ");
	setcolor(BLACK);
	setbkcolor(WHITE);
	outtextxy(400, 810, "ENTER \"0 0 2\" TO QUIT ");
	printf("enter coordinates   ");
	if (turn % 2 == 0)
		printf("PLAYER1's turn\n");
	else
		printf("PLAYER2's turn\n");
	scanf("%d %d %d", x, y, z);
}
