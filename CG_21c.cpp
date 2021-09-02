#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void)
{
int gdriver = DETECT, gmode, errorcode;
int midx, midy, xmax, ymax;
int radius = 175;
initgraph(&gdriver, &gmode, "C:/TurboC3/BGI");
xmax = getmaxx();
ymax = getmaxy();
midx = getmaxx()/2;
midy = getmaxy()/2;
setcolor(getmaxcolor());
circle(midx, midy, radius);
line(162, 162, 200, 365);
line(200, 112, 255, 400);
line(250, 80, 320, 412);
line(310, 65, 380, 400);
line(370, 72, 440, 365);
line(430, 105, 480, 305);
line(430, 105, 162, 162);
line(472, 157, 145, 225);
line(480, 303, 200, 365);
line(492, 225, 155, 298);
getch();
closegraph();
return 0;
}