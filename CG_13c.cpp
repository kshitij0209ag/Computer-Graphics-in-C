#include<stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
int gdriver = DETECT, gmode, errorcode;
int xmax, ymax,x1,y1,x2,y2,tx,ty;
initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
printf("Enter the X1 coordinate:\n");
scanf("%d",&x1);
printf("Enter the Y1 coordinate:\n");
scanf("%d",&y1);
printf("Enter the X2 coordinate:\n");
scanf("%d",&x2);
printf("Enter the Y2 coordinate:\n");
scanf("%d",&y2);
line(x1,y1,x2,y2);
printf("Enter the translation vector:\n");
printf("tx:");
scanf("%d",&tx);
printf("ty:");
scanf("%d",&ty);
line(x1+tx,y1+ty,x2+tx,y2+ty);
getch();
closegraph();
getch();
return 0;
}