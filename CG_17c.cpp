#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int a=getmaxx();
int b=getmaxy();
int y=b/2;
int x=a/2;
line(x,0,x,b);
line(0,y,a,y);
int x1=x+100;
int y1=y-100;
int x2=x+150;
int y2=y-150;
line(x2,y2,x1,y1);
line(x2,y+150,x1,y+100);
line(x-100,y+100,x-200,y+100);
line(x-150,y+150,x-200,y+100);
line(x-100,y+100,x-150,y+150);
line(x-100,y-100,x-150,y-150);
line(x-150,y-150,x-200,y-100);
line(x-200,y-100,x-100,y-100);
getch();
closegraph();
}