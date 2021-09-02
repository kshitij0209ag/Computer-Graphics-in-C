#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void drawline(int x0, int y0, int x1, int y1)
{
int dx, dy, p, x, y;
dx=x1-x0;
dy=y1-y0;
x=x0;
y=y0;
p=2*dy-dx;
while(x<x1)
{
if(p>=0)
{
putpixel(x,y,7);
y=y+1;
x=x+1;
p=p+2*dy-2*dx;
}
else
{
putpixel(x,y,7);
p=p+2*dy;
}
x=x+1;
//delay(100);
}
}
int main()
{
int gd=DETECT, gm, x0 = 100, y0 = 200 , x1 = 150, y1 = 300;
initgraph(&gd, &gm, "C:\\TURBOC3\\bgi");
/* cout<<"Enter co-ordinates of first point: ";
cin>>x0>>y0;
cout<<"Enter co-ordinates of second point: ";
cin>>x1>>y1; */
drawline(x0, y0, x1, y1);
getch();
return 0;
}