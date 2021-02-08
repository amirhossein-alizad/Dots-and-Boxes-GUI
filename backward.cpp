#include "backward.h"
#include "bgi/graphics.h"/*this function undoes the last input and gives the turn to the other player*/
void backward(int temp1, int temp2, int temp3, int horizontal[6][6], int vertical[6][6])
{
	if (temp1 == 0)
	{
		horizontal[temp2 - 1][temp3 - 1] = 0;
		setcolor(WHITE);
		setlinestyle(0, 0, 5);
		line(temp2 * 100, temp3 * 100, (temp2 + 1) * 100, temp3 * 100);
	}
	else if (temp1 == 1)
	{
		vertical[temp2 - 1][temp3 - 1] = 0;
		setcolor(WHITE);
		setlinestyle(0, 0, 5);
		line(temp2 * 100, temp3 * 100, temp2 * 100, (temp3 + 1) * 100);

	}
	setcolor(WHITE);
	setlinestyle(0, 0, 5);
	line(0, 500, 100, 500);
}
