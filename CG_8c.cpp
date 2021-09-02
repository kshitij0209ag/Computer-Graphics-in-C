#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include <graphics.h>
void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
if(getpixel(x, y) != boundary_color &&
getpixel(x, y) != fill_color)
{
putpixel(x, y, fill_color);
boundaryFill4(x + 1, y, fill_color, boundary_color);
boundaryFill4(x, y + 1, fill_color, boundary_color);
boundaryFill4(x - 1, y, fill_color, boundary_color);
boundaryFill4(x, y - 1, fill_color, boundary_color);
}
}
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
rectangle(50,50,100,100);
boundaryFill4(55, 55, 6, 15);
delay(100);
getch();
closegraph();
return 0;
}