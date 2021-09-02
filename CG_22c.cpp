#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x,y,i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtextxy(350,350,"GOOD NIGHT JI");
circle(200,200,50);
setfillstyle(1,15);
floodfill(200,200,15);
setcolor(0);
setfillstyle(1,0);
circle(180,180,50);
floodfill(180,180,0);
for (i=0;i<1000;i++)
{
x = random(1500);
y = random(1500);
putpixel(x,y,15);
}
getch();
closegraph();
}