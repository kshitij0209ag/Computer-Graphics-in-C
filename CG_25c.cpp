#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:/turboc3/BGI");
outtextxy(150,10,"This is program to draw an ellipse :");
ellipse(320,200,0,360,50,20);
setfillstyle(1,RED);
floodfill(350,200,WHITE);
getch();
closegraph();
}