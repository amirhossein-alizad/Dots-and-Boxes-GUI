#include "bgi/graphics.h"
#include "map.h"
#include "menu.h"
#include "squares.h"
#include "lines.h"
#include "tools.h"
#include "input2.h"
#include "restart.h"
#include "winner.h"
#include "backward.h"
#include <stdio.h>
int main()
{
	int input = 0, turn = 0, team, color, vertical[6][6], horizontal[6][6], coordinate1, coordinate2, coordinate3, points1 = 0, points2 = 0, color1 = RED, color2 = BLUE, counter = 1;
	char what_to_do = 't';
	char change_color;
	int temp1, temp2, temp3;
	initwindow(700, 900, "game board");
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(500, 500, 1);
	while (input != 3)
	{
		if (what_to_do != 'r')
			menu(& input);
		if (input > 3 || input < 1)
		{
			printf("WRONG ENTER AGAIN");
			continue;
		}
		if (input == 2)
			input2(&turn, &input, &color1, &color2);
		if (input == 3)
			return 0;
		if (input > 3 || input < 1)
		{
			printf("***choose correctly***\n\n");
			continue;
		}
		if (input == 1)
		{
			cleardevice();
			while (points1 + points2 != 25)
			{
				map(color1, color2, turn, counter);
				counter++;/*an integer with the value of 1 to print the map with delay for just one time*/
				tools(turn, &coordinate1, &coordinate2, &coordinate3, points1, points2, color1, color2);
				if (coordinate1 < 0 || coordinate1>1 || (coordinate1 == 0 && ((coordinate2 < 0 || coordinate2 > 5) || (coordinate3 < 0 || coordinate3 > 6))) || (coordinate1 == 1 && ((coordinate2 < 1 || coordinate2 > 6) || (coordinate3 < 1 || coordinate3 > 5))) || (coordinate1 == 0 && coordinate2 == 0 && (coordinate3 == 3 || coordinate3 == 4 || coordinate3 > 6 || coordinate3 < 0)))
				{
					printf("***wrong coordinates!!enter again***\n");
					continue;
				}
				if ((coordinate1 == 0 && horizontal[coordinate2 - 1][coordinate3 - 1] == 1) || (coordinate1 == 1 && vertical[coordinate2 - 1][coordinate3 - 1] == 1))
				{
					printf("***entered before!!try again***\n");
					continue;
				}/*erors*/
				if (coordinate1 == 0 && coordinate2 == 0 && coordinate3 == 0)
				{
					restart(&points1, &points2, &turn, vertical, horizontal);
					continue;
				}
				if (coordinate1 == 0 && coordinate2 == 0 && coordinate3 == 1)
				{
					restart(&points1, &points2, &turn, vertical, horizontal);
					break;
				}
				if (coordinate1 == 0 && coordinate2 == 0 && coordinate3 == 2)
					return 0;
				/*inside the game's menu*/
				if (coordinate1 == 0 && coordinate2 == 0 && coordinate3 == 5)
				{
					backward(temp1, temp2, temp3, horizontal, vertical);
					turn--;
					continue;/* 0 0 5 to undo*/
				}
				lines(&color, turn, coordinate1, coordinate2, coordinate3, color1, color2, &horizontal[coordinate2 - 1][coordinate3 - 1], &vertical[coordinate2 - 1][coordinate3 - 1]);
				turn = squares(turn, &color, coordinate1, coordinate2, coordinate3, vertical, horizontal, &points1, &points2);
				turn++;
				if (coordinate2 != 0)
				{/*saves every entered input in temp1,2,3 and helps us know what the last input was*/
					temp1 = coordinate1;
					temp2 = coordinate2;
					temp3 = coordinate3;
				}
			}
			if (coordinate1 != 0 && coordinate2 != 0 && (coordinate3 != 0 || coordinate3 != 1 || coordinate3 != 2))
			{
				winner(points1, points2, color1, color2);

				printf("\n WHAT DO YOU WANT TO DO??\n");
				scanf(" %c", &what_to_do);
				if (what_to_do == 'r')
				{
					restart(&points1, &points2, &turn, vertical, horizontal);
					setcolor(RED);
					setbkcolor(WHITE);
					outtextxy(250, 350, "DO YOU WANT TO CHANGE COLORS???");
					setcolor(BLUE);
					setbkcolor(WHITE);
					outtextxy(250, 400, "ENTER y FOR YES");
					setcolor(GREEN);
					setbkcolor(WHITE);
					outtextxy(250, 450, "ENTER n FOR NO");
					scanf(" %c", &change_color);
					if (change_color == 'y')
					{
						input2(&turn, &input, &color1, &color2);
					}
					input = 1;
					continue;
				}
				else if (what_to_do == 'q')
				{
					restart(&points1, &points2, &turn, vertical, horizontal);
					continue;
				}
				else if (what_to_do == 'e')
					return 0;
			}
		}
	}
}
