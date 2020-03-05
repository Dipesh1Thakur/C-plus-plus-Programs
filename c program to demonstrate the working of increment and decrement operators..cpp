//Addition program user-defined fuunction. 
#include<stdio.h>
#include<conio.h>
int addNumbers(int a,int b);  //function prototype
int main()
{
	int n1,n2,sum;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	sum=n1+n2;
	printf("sum=%d",sum);
	return(0);
}
int addNumbers(int a,int b)  // Function definition
{
int result;
result=a+b;
return result;
}
