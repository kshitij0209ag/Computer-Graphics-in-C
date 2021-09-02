#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void cpoint(int x,int y, int xc, int yc)
{
putpixel(x+xc, y+yc, RED);
putpixel(y+xc, x+yc, RED);
putpixel(-x+xc, y+yc, RED);
putpixel(-y+xc, x+yc, RED);
putpixel(-x+xc, -y+yc, RED);
putpixel(-y+xc, -x+yc, RED);
putpixel(x+xc, -y+yc, RED);
putpixel(y+xc, -x+yc, RED);
}
void main()
{
clrscr();
int xc = 200,yc = 300,r = 150,f,fe,fse,x,y;
int gd=DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
//cout<<"Enter xcenter,ycneter,radius:";
//cin>>xc>>yc>>r;
x=0;
y=r;
f=3-r;
while(x<=y)
{
if(f<0)
{
fe=4*x+6;
f=f+fe;
x++;
cpoint(x,y,xc,yc);
}
else if(f>0)
{
fse=10+(4*x)-(4*y);
f=f+fse;
x++;
y--;
cpoint(x,y,xc,yc);
}
}
getch();
closegraph();
}