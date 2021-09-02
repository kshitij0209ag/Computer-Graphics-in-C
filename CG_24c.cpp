#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT, gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
float xc,yc,xr,yr;
cout<<"Enter xc,yc,xr,yr";
cin>>xc>>yc>>xr>>yr;
float theta1=0;
float theta2=90;
while(theta1<theta2)
{
float x=xr*cos(theta1);
float y=yr*sin(theta1);
putpixel(x+xc,y+yc,WHITE);
putpixel(-x+xc,y+yc,WHITE);
putpixel(-x+xc,-y+yc,WHITE);
putpixel(x+xc,-y+yc,WHITE);
theta1++;
}
getch();
}