#include<stdio.h>
#include<conio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int input1();
int input2();
int main()
{
	int x, y,n;
	printf("\n Simple calculator\n");
	printf("1. Addition\n2.Substraction\n3. Multiplication\n 4. Division");
	scanf("%d",&n);
	x= input1();
	y= input2();
   switch(n)
   {
   	case 1:add(x,y);
   	break;
   
   case 2:sub(x,y);
   break;
   case 3:mul(x,y);
   break;
   case 4:div(x,y);
   break;
   default: printf("Invalid");
   break;
   }
   
}
int input1()
{
	int p;
	printf("Enter the first number =\n");
	scanf("%d",&p);
	return  p;
}
input2()
{
	int q;
	printf("Enter the number =\n");
	scanf("%d",&q);
	return q;
}
int add(int a, int b)

{
	int sum=0;
	sum=a+b;
	printf("The sum is = %d", sum);
	getch();
}

int subt (int a ,int b)
{
	int subt=0;
	subt = a-b;
	printf("The subtraction of the number is = %d",subt);
	getch();
}
int mul (int a , int b)
{
	int mult=0;
	mult=a*b;
	printf("The product of the number=%d",mult);
	getch();
	
}
int div(int a , int b)
{
	int divs=0;
	divs= a/b;
	printf("The division is =%d",divs);
	getch();
	return(0);
}

