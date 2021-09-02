#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void circlepoints(float, float, float, float);
void main()
{
clrscr();
int gdrive = DETECT, gmode;
initgraph(&gdrive, &gmode, "C:\\TURBOC3\\BGI");
float x, y, xc = 200, yc = 250, r = 50, xend;
// cout<<"Enter xc , yc and radius: ";
// cin>>xc>>yc>>r;
x = 0;
xend = r / sqrt(2);
while(x < xend)
{
y = sqrt(r * r - x * x);
circlepoints(x, y, xc, yc);
delay(100);
x++;
}
while(!kbhit())
{
setfillstyle(random(10), random(7));
floodfill(xc,yc,BLUE);

}
getch();
closegraph();
}
void circlepoints(float x, float y, float xc, float yc)
{
putpixel(x + xc, y + yc, BLUE);
putpixel(y + xc, x + yc, BLUE);
putpixel(-x + xc, y + yc, BLUE);
putpixel(-y + xc, x + yc, BLUE);
putpixel(-x + xc, -y + yc, BLUE);
putpixel(-y + xc, -x + yc, BLUE);
putpixel(x + xc, -y + yc, BLUE);
putpixel(y + xc, -x + yc, BLUE);
}