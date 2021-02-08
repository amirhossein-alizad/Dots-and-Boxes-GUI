#include "squares.h"
#include "bgi/graphics.h"
#include <stdio.h>
int squares(int turn, int *color, int x, int y, int z, int vertical[6][6], int horizontal[6][6], int *points1, int* points2)/*this function checks if there was a square made draws a circle in that square*/
{
	if (x == 0)
	{/*horizontal*/
		if (vertical[y - 1][z - 2] == 1 && vertical[y][z - 2] == 1 && horizontal[y - 1][z - 2] == 1)
		{
			setcolor(*color);
			circle(y * 100 + 50, z * 100 - 50, 45);
			setfillstyle(9, *color);
			floodfill(y * 100 + 50, z * 100 - 50, *color);
			if (turn % 2 == 0)
				(*points1)++;
			else
				(*points2)++;
			turn--;
		}
		if (vertical[y - 1][z - 1] == 1 && vertical[y][z - 1] == 1 && horizontal[y - 1][z] == 1)
		{
			setcolor(*color);
			circle(y * 100 + 50, z * 100 + 50, 45);
			setfillstyle(9, *color);
			floodfill(y * 100 + 50, z * 100 + 50, *color);
			if (turn % 2 == 0)
				(*points1)++;
			else
				(*points2)++;
			turn--;
		}
		if (vertical[y - 1][z - 2] == 1 && vertical[y][z - 2] == 1 && horizontal[y - 1][z - 2] == 1 && vertical[y - 1][z - 1] == 1 && vertical[y][z - 1] == 1 && horizontal[y - 1][z] == 1)
		{/*if there was a rectangle and user entered a coordinate which should give him 2 points this if statement does it*/
			if (turn % 2 == 0)
			{
				(*points1)++;
				(*points2)--;
			}
			else
			{
				(*points2)++;
				(*points1)--;
			}
			turn--;
		}

	}
	if (x == 1)
	{/*vertical*/
		if (vertical[y - 2][z - 1] == 1 && horizontal[y - 2][z - 1] == 1 && horizontal[y - 2][z] == 1)
		{
			setcolor(*color);
			circle((y - 1) * 100 + 50, z * 100 + 50, 45);
			setfillstyle(9, *color);
			floodfill((y - 1) * 100 + 50, z * 100 + 50, *color);
			if (turn % 2 == 0)
				(*points1)++;
			else
				(*points2)++;
			turn--;
		}
		if (vertical[y][z - 1] == 1 && horizontal[y - 1][z - 1] == 1 && horizontal[y - 1][z] == 1)
		{
			setcolor(*color);
			circle(y * 100 + 50, z * 100 + 50, 45);
			setfillstyle(9, *color);
			floodfill(y * 100 + 50, z * 100 + 50, *color);
			if (turn % 2 == 0)
				(*points1)++;
			else
				(*points2)++;
			turn--;
		}
		if (vertical[y - 2][z - 1] == 1 && horizontal[y - 2][z - 1] == 1 && horizontal[y - 2][z] == 1 && vertical[y][z - 1] == 1 && horizontal[y - 1][z - 1] == 1 && horizontal[y - 1][z] == 1)
		{/*if there was a rectangle and user entered a coordinate which should give him 2 points this if statement does it*/
			if (turn % 2 == 0)
			{
				(*points1)++;
				(*points2)--;
			}
			else
			{
				(*points2)++;
				(*points1)--;
			}
			turn--;
		}
	}
	return turn;
}
