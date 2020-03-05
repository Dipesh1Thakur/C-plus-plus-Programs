#include<stdio.h>
int main ()
{
	int days,i,Temp[10],Total=0,Average=0,Hot=0,pleasant=0,cold=0;
	printf("How many days to record=>");
	scanf("%d",&days);
	printf("Please enter the %d days temperature readings\n",days);
	for(i=0;i<days;i++)
	{
		printf("Temperature day[%d]=",i+1);
	    scanf("%d",&Temp[i]);
	    Total=Total+Temp[i];
         	Average=days/Total;
	}

	printf("---------------------------------------------------------\nDaily Report\n---------------------------------------------------------\n");
	for(i=0;i<days;i++)
	{
		printf("Temperature day[%d]=%d celcius",i+1,Temp[i]);
	   if(Temp[i]>85)
	   {
	   	printf("very hot");
	   	Hot++;
	   }
	   else if(Temp[i]>60&&Temp[i]<85)
    {
     printf("Pleasant day");
	 pleasant++;	
	}	
	else
	{
		printf("Verry cold");
		cold++;
	}
	}
	    printf("total trmperature is =%d",Total);
	    printf("The average temperature for%d=days%dcelcius\n",days,Average);
		printf("number of hot days =%d days\s\n",Hot);
		printf("number of pleasant days =%d days\s\n",pleasant);
		printf("number of cold days =%d days\s\n",cold);
	}
		
