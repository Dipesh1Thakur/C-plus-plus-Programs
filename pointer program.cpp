#include<stdio.h>
#include<conio.h>
int main()
{
	int n=400;
	int *p=&n;
	int m=500;
	int *ptr=&m;
	printf("%f\t",*p);
	p=&m;
	*p=*ptr+*p;
	printf("%d\t",n);
	printf("%d\t",*p);
	return 0;
	
}
