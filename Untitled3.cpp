#include<stdio.h>
#include<conio.h>
int main()
{
int x=2,y=35;

x=y++ + x++;
y=++y+ ++x;
printf("line 1=%d%d\n",x,y);
printf("line 2=%d%d\n",x+1,y+1);
printf("line 3=%d%d\n",x++,y++);
getch();
}
