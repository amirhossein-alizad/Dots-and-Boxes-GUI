#include "bgi/graphics.h"
#include <stdio.h>
#include "input2.h"
void input2(int *turn, int *input, int *color1, int *color2)
{/*this function checks if the input was 2 comes to this menu and gives the players 9 choices of colors*/
	int team1, team2;
	cleardevice();
	setlinestyle(0, 0, 4);
	setcolor(RED);
	circle(175, 50, 25);
	setfillstyle(9, RED);
	floodfill(175, 50, RED);
	setcolor(RED);
	setbkcolor(WHITE);
	outtextxy(225, 50, "1-RED");

	setcolor(BLUE);
	circle(175, 150, 25);
	setfillstyle(9, BLUE);
	floodfill(175, 150, BLUE);
	setcolor(BLUE);
	setbkcolor(WHITE);
	outtextxy(225, 150, "2-BLUE");

	setcolor(COLOR(235, 105, 15));
	circle(175, 250, 25);
	setfillstyle(9, COLOR(235, 105, 15));
	floodfill(175, 250, COLOR(235, 105, 15));
	setcolor(COLOR(235, 105, 15));
	setbkcolor(WHITE);
	outtextxy(225, 250, "3-ORANGE");

	setcolor(BLACK);
	circle(175, 350, 25);
	setfillstyle(9, BLACK);
	floodfill(175, 350, BLACK);
	setcolor(BLACK);
	setbkcolor(WHITE);
	outtextxy(225, 350, "4-BLACK");

	setcolor(MAGENTA);
	circle(175, 450, 25);
	setfillstyle(9, MAGENTA);
	floodfill(175, 450, MAGENTA);
	setcolor(MAGENTA);
	setbkcolor(WHITE);
	outtextxy(225, 450, "5-MAGENTA");

	setcolor(COLOR(20, 115, 20));
	circle(175, 550, 25);
	setfillstyle(9, COLOR(20, 115, 20));
	floodfill(175, 550, COLOR(20, 115, 20));
	setcolor(COLOR(20, 115, 20));
	setbkcolor(WHITE);
	outtextxy(225, 550, "6-GREEN");

	setcolor(CYAN);
	circle(175, 650, 25);
	setfillstyle(9, CYAN);
	floodfill(175, 650, CYAN);
	setcolor(CYAN);
	setbkcolor(WHITE);
	outtextxy(225, 650, "7-CYAN");

	setcolor(COLOR(255, 0, 130));
	circle(175, 750, 25);
	setfillstyle(9, COLOR(255, 0, 130));
	floodfill(175, 750, COLOR(255, 0, 130));
	setcolor(COLOR(255, 0, 130));
	setbkcolor(WHITE);
	outtextxy(225, 750, "8-PINK");

	setcolor(COLOR(10, 220, 240));
	circle(175, 850, 25);
	setfillstyle(9, COLOR(10, 220, 240));
	floodfill(175, 850, COLOR(10, 220, 240));
	setcolor(COLOR(10, 220, 240));
	setbkcolor(WHITE);
	outtextxy(225, 850, "9-LIGHT BLUE");

	printf("CHOOSE TWO COLORS:\n");/*user enters 2 color's numbers*/
	scanf("%d", &team1);
	scanf("%d", &team2);
	if (team1 == team2 && team1 < 9)
	{/*if the entered numbers were the same,color2 will be the next color of team1's color in the menu*/
		printf("SAME COLORS\n");
		team2 = team1 + 1;
	}
	else if (team1 == team2 && team1 == 9)
	{
		printf("SAME COLORS\n");
		team2 = team1 - 1;
	}
	if (team1 < 1 || team1 > 9 || team2 < 1 || team2 > 9)
	{
		printf("WRONG INPUTS\n");
		printf("CHOOSE TWO COLORS:\n");/*user enters 2 color's numbers*/
		scanf("%d", &team1);
		scanf("%d", &team2);
	}
	switch (team1)/*sets team1's colors*/
	{
	case 1:
		*color1 = RED;
		break;
	case 2:
		*color1 = BLUE;
		break;
	case 3:
		*color1 = COLOR(235, 105, 15);
		break;
	case 4:
		*color1 = BLACK;
		break;
	case 5:
		*color1 = MAGENTA;
		break;
	case 6:
		*color1 = COLOR(20, 115, 20);
		break;
	case 7:
		*color1 = CYAN;
		break;
	case 8:
		*color1 = COLOR(255, 0, 130);
		break;
	case 9:
		*color1 = COLOR(10, 220, 240);
		break;
	}
	switch (team2)/*sets team2's colors*/
	{
	case 1:
		*color2 = RED;
		break;
	case 2:
		*color2 = BLUE;
		break;
	case 3:
		*color2 = COLOR(235, 105, 15);
		break;
	case 4:
		*color2 = BLACK;
		break;
	case 5:
		*color2 = MAGENTA;
		break;
	case 6:
		*color2 = COLOR(20, 115, 20);
		break;
	case 7:
		*color2 = CYAN;
		break;
	case 8:
		*color2 = COLOR(255, 0, 130);
		break;
	case 9:
		*color2 = COLOR(10, 220, 240);
		break;
	}
	*input = 1;
}
