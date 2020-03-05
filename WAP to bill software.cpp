#include<stdio.h>
#include<conio.h>
int main()
{
	int i,days[3],unit_price[3],customer_id,date,total_charge[3],discount,price_after;
	printf("Please  Enter 3 days for stok info \n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("custmer id =>");
	scanf("%d",&customer_id);
	printf("Date =>");
	scanf("%d",&date);
	for(i-0;i<3;i++)
	{
		printf("day[%d] = ",i+1);
		scanf("%d",& days[i]);
		printf("unit price[%d]=",i+1);
		scanf("%d", & unit_price[i]);
		total_charge[i] += days[i] * unit_price[i];
		printf("day[%d] charges = %d\n",i+1,total_charge[i]); 
	}
	for(i=0;i<3;i++)
	{
		if(total_charge[i] > 600)
		{
			discount = total_charge[i] * 0.25;
			price_after = total_charge[i] - discount;
			
		}
	
	    else if(total_charge[i]>401 && total_charge[i]<600)
	    {
	    	discount = total_charge[i] * 0.15;
	    	price_after = total_charge[i] - discount;
		}
		
		else if(total_charge[i]>200&&total_charge[i]<400)
		{
			discount = total_charge[i] * 0.1;
			price_after = total_charge[i]- discount;
			
		}
		else
		{
		printf("No discount\n");
		}
	
	}
	printf("Total chargres =%d\n",total_charge);
	printf("Discounted price =%d\n",discount);
	printf("price after discount =%d",price_after);
	getch();
	return 0;
}
