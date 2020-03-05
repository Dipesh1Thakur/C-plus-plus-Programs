#include<stdio.h>
#include<conio.h>
int main()
{
	int i,temp[5],hotdays=0,pleasantdays=0,count=0,total_temperature,colddays=0,days,Average,hot;
	printf("How many days to record =>");
	scanf("%d",&days);
	printf("Please enter days temperature reading \n",days);
	for(i=0;i<days;i++)
	{
		printf("temperature days[%d] = ",i+1);
		scanf("%d",&temp[i]);
		total_temperature += temp[i];
	}
	
	printf("-----------------------------------------\n");
	printf("Daily temperature report\n");
	printf("-----------------------------------------\n\n");
	for(i=0;i<days;i++)
	{
	if(temp[i]>85)
	{
		printf("temperature day[%d]=%d celcius veryhot\n",i+1,temp[i]);
		hotdays++;
		}	
		else if(temp[i]>60&&temp[i]<85)
		{
			printf("temperature day[%d]= %d celcius pleasant \n",i+1,temp[i]);
			pleasantdays++;
		}
		else
	  	 {
		 
			printf("temperature day[%d] = %d celcius verycold\n ",i+1,temp[i]);
			colddays++;
    }
	
		Average = total_temperature/days;
		printf("No of hot days= %d\n",hotdays);
		printf("No of pleasant days= %d\n",pleasantdays);
		printf("No of cold days= %d \n",colddays);
		printf("The average temperature is =%d\n\n\n",Average);
	}
	getch();
	return 0;
}
