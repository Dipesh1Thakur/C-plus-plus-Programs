#include<stdio.h>
int square(int a);
int main()
{
	int b;
	for(b=0;b<=10;b++){
	
	printf("%d\n",square(b));
}
puts("");
}
int square(int a)
{
	return a*a;
}
