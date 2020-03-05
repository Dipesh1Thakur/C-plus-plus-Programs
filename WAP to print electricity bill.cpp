
#include<stdio.h>
#include<conio.h>
int main()
{
    int unit,Charge_of_unit,T;
    printf("Enter the units consumed\n");
    scanf("%d",&unit);
    if(unit<100)
    {
       Charge_of_unit=unit*40;
    }
    else if(unit<300 && unit>200)
    {
      Charge_of_unit=unit*50;
    }
    else
    {
        Charge_of_unit=unit*60;
    }
    printf("Meter charge=Rs.50\n");
    T=Charge_of_unit+50;
    printf("Total charge=%d",T);
    getch();
    return 0;
}

