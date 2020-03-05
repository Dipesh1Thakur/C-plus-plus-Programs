#include<stdio.h>
#include<conio.h>
int main()
{
int y;
for(y=0;y<=10;y++){
	printf("line **********>>%d\n",y);
	y+=2;
}
printf("Hello The last value of y=>%d" ,y);
getch();
}
