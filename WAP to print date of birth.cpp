#include<stdio.h>
#include<conio.h>
int main()
{
    int b,c,Age;
    printf("Please enter your year of birth\n");
    scanf("%d",&b);
    printf("Please enter the current year\n");
    scanf("%d",&c);
    Age=c-b;
    printf("You are %d years old.",Age);
    getch();
    return 0;
}

