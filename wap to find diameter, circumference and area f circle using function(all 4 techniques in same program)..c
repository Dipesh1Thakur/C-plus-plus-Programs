//wap to find diameter, circumference and area f circle using function(all 4 techniques in same program).
#include<stdio.h>
#include<conio.h>
// using return type and no argument
int dia()
{
int r,dia=0,cir=0,area=0;
printf("enter the radius to find diameter,circumference and area circle using return type and no argument\n");
scanf("%d",&r);
dia=2*r;
cir=2*3.15*r;
area=2*3.15*r*r;
printf(" circumference=%d area= %d",dia,cir,area);
return dia;
}

// using return type and using argument
int di(int r)
{
int dia=0,cir=0,area=0;
printf("\nenter the radius to find diameter,circumference and area circle using return type and argument\n");
scanf("%d",&r);
dia=2*r;
cir=2*3.15*r;
area=2*3.15*r*r;
printf(" circumference=%d area= %d",dia,cir,area);
return dia;
}
// using no return type and using no argument
void d()
{
int r,dia=0,cir=0,area=0;
printf("\nenter the radius to find diameter,circumference and area circle using no return type and no argument\n");
scanf("%d",&r);
dia=2*r;
cir=2*3.15*r;
area=2*3.15*r*r;
printf("diameter=%d circumference=%d area= %d",dia,cir,area);
}
// using no return type and using argument
void f(int r)
{
int dia=0,cir=0,area=0;
printf("\nenter the radius to find diameter,circumference and area circle using no return type and argument\n");
scanf("%d",&r);
dia=2*r;
cir=2*3.15*r;
area=2*3.15*r*r;
printf("diameter=%d circumference=%d area= %d",dia,cir,area);
}
int main()
{
    int r;
int a=dia();
printf(" diameter=%d",a);
int b=di(r);
printf(" diameter=%d",b);
d();
f(r);
getch();
return 0;
}
