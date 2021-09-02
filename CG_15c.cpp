#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main()
{
int gd=0,gm,x1,y1,x2,y2;
float s,c, angle;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
setcolor(RED);
printf("Enter coordinates of line: ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
line(x1,y1,x2,y2);
getch();
printf("Enter rotation angle: ");
scanf("%f", &angle);
c = cos(angle * 3.14/180);
s = sin(angle * 3.14/180);
x1 = (x1 * c + y1 * s);
y1 = (-x1 * s + y1 * c);
x2 = (x2 * c + y2 * s);
y2 = (-x2 * s + y2 * c);
line(x1,y1,x2,y2);
getch();
closegraph();
return 0;
}