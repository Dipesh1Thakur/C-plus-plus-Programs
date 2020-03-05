#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,d,m,year,price[5],cust[2],cust_id=12345,date,Discount_price,Grand_total,total_price[2]={};
	printf(" please enter number of customer number=");
	scanf("%d",&n);
	for(i=0;i<n;i++);
	{
		printf("customer id :%d\n",cust_id);
		cust_id++;
		printf("Date=");
		scanf("%d%d%d",&d,&m,&year);
		// scanf("&d",date);
		//remove total_price to j second for loop
		printf("please enter  5 price for customer %d\n",i+1);
		for(j=0;j<5;j++)
		{
			printf("price[%d]=",j+1);
			scanf("%d",&price[i]);
			total_price[i]+=price[j];     // to sum of two values  
			
		}
}
for(i=0;i<n;i++)
{
	int cust_id =12345;
	printf("Customer id %d\n",cust_id);  //use %d for holding the value 
	cust_id ++;
	printf("total_price:%d",total_price[i]);
	if(total_price[i]>=1500)
	{
		Discount_price=total_price[i]*0.25;
		Grand_total=total_price[i]-Discount_price;
		printf("\nDiscounted _price:\t%d\n",Discount_price);
		printf("price after discount:\t%d\n",Grand_total);
	
	}
	   else	if(total_price[i]>=1000&&total_price[i]<=1499)
	{
		Discount_price=total_price[i]*0.15;
		Grand_total=total_price[i]-Discount_price;
		printf("\nDiscounted _price:\t%d\n",Discount_price);
		printf("price after discount:%d\n",Grand_total);
	
	}
	
	   else	if(total_price[i]>=500&&total_price[i]<=999)
	{
		Discount_price=total_price[i]*0.1;
		Grand_total=total_price[i]-Discount_price;
		printf("\nDiscounted _price:\t%d\n",Discount_price);
		printf("price after discount:%d\n",Grand_total);
	
	}

else
{
	printf ("\nTax free\n");
}
}
getch();
return(0);
}
