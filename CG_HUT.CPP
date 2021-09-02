#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main() {
int gd = DETECT, gm;
initgraph(&gd, &gm , "C:\\TURBOC3\\BGI");
printf("\t\t ############## HUT using lines ######");
line(150, 100, 50, 200);
line(150, 100, 350, 100);
line(150, 100, 300, 200);
line(300, 200, 500, 200);
line(350, 100, 500, 200);
line(50, 200, 300, 200);
getch();
closegraph();
}