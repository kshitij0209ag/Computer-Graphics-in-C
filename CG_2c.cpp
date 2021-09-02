#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=DETECT, gm;
int x1 = 200,y1 = 300,x2 = 400,y2 = 300,m;//c=0;
initgraph(&gd,&gm,"C://TURBOC3//bgi");
//cout<<"Enter the value of x1,y1,x2,y2";
// cin>>x1>>y1>>x2>>y2;
m=(y2-y1)/(x2-x1);
//c=y1-(m*x1);
while(x1<=x2)
{
if(m<=1)
{
x1=x1+1;
y1=y1+m;
putpixel(x1,y1,RED);
}
else
{
y1=y1+1;
x1=x1+1/m;
putpixel(x1,y1,RED);
}
}
getch();
closegraph();
}