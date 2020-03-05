// WAP to calculate ssalary.
#include<stdio.h>
#include<conio.h>
int salary(int a)
{
	
int i,salary[i],tax,total_salary=0;
printf("Enter the salary of 12 month= ");
scanf("%d",&salary);
y=salary;
for(i=0;i<12;i++)
{
	printf("month[%d]=",i+1);
	scanf("%d",&salary);
	total_salary+=salary[i];
	total_salary=a;
}
getch();
}

int salary,a;
if(total_salary>50000)
{
	tax=total_salary-50000*0.35+10900.00;
}
else if(total_salary>30000&&total_salary<50000)
{
	tax=total_salary-30000*0.2+5500.00;
}
else if(total_salary>15000&&total_salary<30000)
{
	tax=total_salary-15000*0.18+2250;
}
else 
{
	total_salary=total_salary*0.5;
}
printf("salary after tax paid is =%d",tax);


}
int salary(a);
return total_salary;
