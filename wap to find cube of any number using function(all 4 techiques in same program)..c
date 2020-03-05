//wap to find cube of any number using function(all 4 techiques in same program).
#include<stdio.h>
#include<conio.h>
// using return type and no argument
int cube()
{
int a,cube=0;
printf("enter the number to find cube using return type and no argument\n");
scanf("%d",&a);
cube=a*a*a;
printf("%d",cube);
return cube;
}

// using return type and using argument
int q(int x)
{
int q=0;
printf("\nenter the number to find cube using return type and using argument\n");
scanf("%d",&x);
q=x*x*x;
printf("%d",q);
return q;
}
// using no return type and using no argument
void c()
{
int c=0,y;
printf("\nenter the number to find cube using no return type and using no argument\n");
scanf("%d",&y);
c=y*y*y;
printf("%d",c);
}
// using no return type and using argument
void f(int b)
{
int f=0;
printf("\nenter the number to find cube using no return type and using argument\n");
scanf("%d",&b);
f=b*b*b;
printf("%d",f);
}
int main()
{
    int a,b;
cube();
q(a);
c();
f(b);
return 0;
getch();
return 0;
}
