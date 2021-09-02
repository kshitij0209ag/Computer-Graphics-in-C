#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=DETECT, gm;
int x1= 200,y1 = 100,x2 = 400,y2 = 400,m=0,c=0;
initgraph(&gd,&gm,"C:/TURBOC3/bgi");
// cout<<"Enter the value of starting and ending points: ";
// cin>>x1>>y1>>x2>>y2;
m= (y2-y1)/(x2-x1);
c=y1-(m*x1);
while(x1<=x2)
{
if(m<=1)
{
y1=(m*x1)+c;
x1++;
putpixel(x1,y1,RED);
}
else
{
x1=(y1-c)/m;
y1++;
putpixel(x1,y1,RED);
}
}
getch();
closegraph();
}