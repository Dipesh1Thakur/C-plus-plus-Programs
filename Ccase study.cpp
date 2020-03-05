#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,a,b,P,sum;
    printf("SIMPLE CALCULATION PROGRAM\n");
    printf("Menu:\n");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.Power\n");
    printf("6.Quit\n");
    printf("Enter your option>");
    scanf("%d",&n);
    printf("Enter 1:\n");
    scanf("%d",&a);
    printf("Enter 2:\n");
    scanf("%d",&b);
    printf("The result:\n");
    switch(n)
    {
        case 1:sum=a+b;
        printf("sum is %d",sum);
        break;
        case 2:printf("%d-%d=%d",a,b,a-b);
        break;
        case 3:printf("%d*%d=%d",a,b,a*b);
        break;
        case 4:printf("%d/%d=%d",a,b,a/b);
        break;
        case 5:P=pow(a,b);
            printf("pow(%d,%d)=%d",a,b,P);
        break;
        case 6:printf("Quit");
    }
    getch();
    return 0;
}

