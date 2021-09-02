#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int x1,y1,x2,y2,s,g,p,q;
float sx,sy;
cout<<"\nTo show shearing effect on rectangle\n";
cout<<"\nenter the x1 and x2 coordinates:-\n";
cin>>x1>>x2;
cout<<"\nenter the y1 and y2 coordinates:-\n";
cin>>y1>>y2;
cout<<"\nenter the shearing factor along the x-axis:-";
cin>>sx;
cout<<"\nenter trhe scaling factor to the y-axis:-";
cin>>sy;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
setbkcolor(WHITE);
setcolor(8);
line(x1,y1,x2,y1);
line(x2,y2,x1,y2);
line(x2,y1,x2,y2);
line(x1,y2,x1,y1);
//shearing process started
s=x1+int((sx*y1)+0.5);
p=y1+int((sy*x1)+0.5);
g=x2+int((sx*y2)+0.5);
q=y2+int((sy*x2)+0.5);
setcolor(8);
line(x1,y1,x2,p);
line(g,q,s,y2) ;
line(x2,p,g,q);
line(s,y2,x1,y1);
setcolor(8);
outtextxy(100,60,"Shearing on rectangle");
getch();
}