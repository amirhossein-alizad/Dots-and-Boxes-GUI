#include "bgi/graphics.h"
#include "menu.h"
#include <stdio.h>
void menu(int * input)/*show the menu and gets the input*/
{
	setcolor(BLACK);
	setbkcolor(WHITE);
	outtextxy(250, 25, "DOTS AND BOXES!!!");
	setcolor(MAGENTA);
	setbkcolor(WHITE);
	outtextxy(175, 100, "1-START THE GAME");
	setcolor(GREEN);
	setbkcolor(WHITE);
	outtextxy(175, 130, "2-SELECT COLORS");
	setcolor(CYAN);
	setbkcolor(WHITE);
	outtextxy(175, 160, "3-QUIT THE GAME!");
	printf("please choose and enter:\n");
	scanf("%d", input);
}
