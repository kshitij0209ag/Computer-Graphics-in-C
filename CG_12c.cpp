#include <graphics.h>
#include <conio.h>
// driver code
int main()
{

int arr[] = {320, 150, 400, 250,
250, 350, 320, 150};
fillpoly(4, arr);
getch();
closegraph();
return 0;
}