//wap to find cube of any number using function(all 4 techiques in same program).
#include<stdio.h>
#include<conio.h>
// using return type and no argument
int add()
{
int a,b,add=0;
printf("enter the number to find add using return type and no argument\n");
scanf("%d%d",&a,&b);
add=a+b;
printf("%d",add);
return add;
}

// using return type and using argument
int q(int x,int y)
{
int q=0;
printf("\nenter the number to find add  using return type and using argument\n");
scanf("%d%d",&x,&y);
q=x+y;
printf("%d",q);
return q;
}
// using no return type and using no argument
void c()
{
int c=0,y,z;
printf("\nenter the number to find add using no return type and using no argument\n");
scanf("%d%d",&y,&z);
c=y+z;
printf("%d",c);
}
// using no return type and using argument
void f(int b,int a)
{
int f=0;
printf("\nenter the number to find add using no return type and using argument\n");
scanf("%d%d",&b,&a);
f=b+a;
printf("%d",f);
}
int main()
{
    int a,b,l,m;
add();
q(a,b);
c();
f(b,a);
return 0;
getch();
return 0;
}
