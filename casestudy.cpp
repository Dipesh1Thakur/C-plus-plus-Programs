#include<stdio.h>
#include<conio.h>
int main()
{
int employee_status,salary1,salary2,years_of_service,s;

printf("Enter the employee status as 'P' for part time and 'F' for full time in block letters\n");
scanf("%c",&employee_status);

printf("Enter the years of service\n");
scanf("%d",&years_of_service);

printf("Enter your current salary \n");
scanf("%d",&salary1);

switch(employee_status)
{
    case 'P':if(years_of_service<5)
    {
        salary2=salary1+salary1*0.025;
    }
    else
    {
       salary2=salary1+salary1*0.03;
    }
    break;
    case 'F':if(years_of_service<5)
    {
         salary2=salary1+salary1*0.04;
    }
else
{
     salary2=salary1+salary1*0.05;
}
break;
default:printf("Invalid status of employee");
}
printf("Your new salary is:%d",salary2);
getch();
return 0;
}

