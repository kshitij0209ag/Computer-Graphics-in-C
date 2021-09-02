#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int gd = DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:/TURBOC3/BGI ");
setcolor(5);
line(20,50,20,180);
line(20,50,100,50);
line(20,70,100,70);
line(20,90,100,90);
line(20,110,100,110);
line(100,50,100,110);
circle(60,80,10);
line(52,80,68,80);
line(60,72,60,88);
setfillstyle(SOLID_FILL,22);
floodfill(21,51,5);
setfillstyle(SOLID_FILL,7);
floodfill(21,75,5);
setfillstyle(SOLID_FILL,2);
floodfill(21,95,5);
setfillstyle(SOLID_FILL,7);
floodfill(81,75,5);
setfillstyle(SOLID_FILL,7);
floodfill(61,81,5);
getch();
closegraph();
}