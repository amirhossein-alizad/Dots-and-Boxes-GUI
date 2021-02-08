#include "map.h"
#include "bgi/graphics.h"

void map(int color1, int color2, int turn, int counter)
{/*shows the simple 5*5  map(36 circles) and tells whose turn it is*/
	int i, j;
	setcolor(COLOR(255, 255, 0));
	for (i = 1;i < 7;i++)
	{
		for (j = 1;j < 7;j++)
		{
			circle((j) * 100, (i) * 100, 10);
			if (counter < 2)
				delay(70);
			setfillstyle(SOLID_FILL, COLOR(255, 255, 0));
			floodfill((j) * 100, (i) * 100, COLOR(255, 255, 0));
		}
	}
	setlinestyle(0, 0, 6);
	if (turn % 2 == 0)
	{
		setcolor(color1);
		circle(200, 750, 75);
		setfillstyle(9, color1);
		floodfill(200, 750, color1);
		outtextxy(200, 850, "PLAYER 1");
	}
	if (turn % 2 == 1)
	{
		setcolor(color2);
		circle(200, 750, 75);
		setfillstyle(9, color2);
		floodfill(200, 750, color2);
		outtextxy(200, 850, "PLAYER 2");
	}

}
