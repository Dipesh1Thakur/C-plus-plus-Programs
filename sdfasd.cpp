#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0;
	int sum,j;
	for(j=1;j<=5;j++)
	{
		scanf("%d",&num);
		if(num<0)
		break;
		sum=sum+num;
		
	}
	printf("sum=%d",sum);
	getch();
}
