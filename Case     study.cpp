#include<stdio.h>
#include<conio.h>
int main()
{
char c;
printf("Enter your grade as A,B,C\n");
scanf("%c",&c);
switch(c)
{
case 'A':
case 'a':printf("Outstanding");
break;
case 'B':
case 'b':printf("Good achievement");
break;
case 'C':
case 'c':printf("Good Try Harder");
break;
default: printf("Invalid");
}
getch();
return 0;
}

