#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	printf("Enter the rows \n");
	scanf("&d",&i);
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
