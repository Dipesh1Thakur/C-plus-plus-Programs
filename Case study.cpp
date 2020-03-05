#include<stdio.h>
#include<conio.h>
int  main()
{
char ch;
printf("enter the class id of the fruit\n");
printf("1.for banana press B or b\n");
printf("2.for cranberry press C or c\n");
printf("3.for durian press D or d\n");
printf("4.for fig press For F or f\n");
scanf("%d",&ch);
switch(ch)
{
case 'B':
case 'b':printf("banana");
break;
case 'C':
case 'c': 
printf("cranberry");
break;
case 'E':
case 'e': printf("Durian");
break;
case 'F':
case 'f':
printf("fig");
break;
default:printf("unknown fruit class");
}
getch();
return(0);
}

