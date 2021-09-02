#include<stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
float main(void)
{
int gdriver = DETECT, gmode, errorcode;
float xmax, ymax,x1 = 100,y1 = 200 ,x2 = 150 ,y2 = 300,tx = 0,ty = 0.5;
initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
//printf("Enter the X1 coordinate:\n");
//scanf("%f",&x1);
//printf("Enter the Y1 coordinate:\n");
//scanf("%f",&y1);
//printf("Enter the X2 coordinate:\n");
//scanf("%f",&x2);
//printf("Enter the Y2 coordinate:\n");
//scanf("%f",&y2);
line(x1,y1,x2,y2);
//printf("Enter the Scaling vector:\n");
//printf("tx:");
//scanf("%f",&tx);
//printf("ty:");
//scanf("%f",&ty);
line(x1*tx,y1*ty,x2*tx,y2*ty);
getch();
closegraph();
getch();
return 0;
}