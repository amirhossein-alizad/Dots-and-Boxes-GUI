#include "bgi/graphics.h"
#include "lines.h"
void lines(int *color, int turn, int x, int y, int z, int color1, int color2, int* horizontal, int *vertical)/*this function checks if the input was correct draws a line in the entered coordinates*/
{
	if (turn % 2 == 0)
		*color = color1;
	else
		*color = color2;

	if (x == 0)/*horizontal*/
	{
		setcolor(*color);
		setlinestyle(0, 0, 5);
		line(y * 100, z * 100, (y + 1) * 100, z * 100);
		(*horizontal) = 1;
	}
	if (x == 1)/*vertical*/
	{
		setcolor(*color);
		setlinestyle(0, 0, 5);
		line(y * 100, z * 100, y * 100, (z + 1) * 100);
		(*vertical) = 1;
	}
}
