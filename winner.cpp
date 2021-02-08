#include "bgi/graphics.h"
#include "winner.h"
void winner(int points1, int points2, int color1, int color2)
{/*this function checks who has the most points and announces them as winner*/
 /*first shows each player's color then draws a bigger circle and tells who won*/
	cleardevice();
	char PLAYER1[25], PLAYER2[25];
	sprintf(PLAYER1, "PLAYER1's POINTS:%d", points1);
	sprintf(PLAYER2, "PLAYER2's POINTS:%d", points2);
	setlinestyle(0, 0, 5);

	setcolor(color1);
	circle(100, 100, 50);
	setfillstyle(9, color1);
	floodfill(100, 100, color1);
	outtextxy(175, 100, "PLAYER A");
	outtextxy(325, 100, PLAYER1);

	setcolor(color2);
	circle(100, 300, 50);
	setfillstyle(9, color2);
	floodfill(100, 300, color2);
	outtextxy(175, 300, "PLAYER B");
	outtextxy(325, 300, PLAYER2);


	if (points1 > points2)
	{
		setcolor(color1);
		circle(350, 450, 100);
		setfillstyle(9, color1);
		floodfill(350, 450, color1);
		outtextxy(325, 575, "*** PLAYER 'A' WINS ***");
	}
	else
	{
		setcolor(color2);
		circle(350, 450, 100);
		setfillstyle(9, color2);
		floodfill(350, 450, color2);
		outtextxy(325, 575, "*** PLAYER 'B' WINS ***");
	}

	setcolor(DARKGRAY);
	outtextxy(250, 650, "ENTER r TO PLAY AGAIN");
	outtextxy(250, 750, "ENTER q TO OPEN MAIN MENU ");
	outtextxy(250, 850, "ENTER e TO EXIT");
}
