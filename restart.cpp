#include "bgi/graphics.h"
#include "restart.h"
void restart(int *points1, int* points2, int *turn, int vertical[6][6], int horizontal[6][6])
{/* this function sets every value equl to 0 and returns them by reference */
	*points1 = 0;
	*points2 = 0;
	*turn = 0;
	for (int i = 0;i < 6;i++)
	{
		for (int j = 0;j < 6;j++)
		{
			vertical[i][j] = 0;
			horizontal[i][j] = 0;/*sets every value of the arrays equal to 0 which means that there is no lines*/
		}
	}
	cleardevice();
}
