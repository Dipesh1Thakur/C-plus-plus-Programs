#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,price[5],cust[2],cust_id={1,2,3,4,5},date,Discount_price,Grand_total,total_price[2]={};
	printf("please enter number for customer=>");
	scanf("%d",&n);
	
		printf("customer id :%d\n",cust_id);
		cust_id++;
		printf("Date=");
		scanf("%d",&date);
		printf("\n");
		total_price[i]+=price[i];
		printf("Please enter 5 price for customer:\n");
		
		
		
		for(j=1;j<=5;j++)
		{
			printf("price[%d]=",j++);
			scanf("%d",&price[i]);
		
			
		}
			printf("****************************************\n");
		
	}

	
	
		
		printf("total_price=%d",total_price[i]);
	}
	
	if(total_price[i]>1500)
	{
		Discount_price=total_price[i]*0.25;
		Grand_total=total_price[i]-Discount_price;
		
	}
	
	 else if(total_price[i]>1000&&total_price[i]<1499)
	 {
		Discount_price=total_price[i]*0.15;
		Grand_total=total_price[i]-Discount_price;
		
	}
	else if(total_price[i]>500&&total_price[i]<999)
	{
		Discount_price=total_price[i]*0.15;
		Grand_total=total_price[i]-Discount_price;

	}
	
	else
	{
	printf("\nTax free\n");
	
}
	printf("total price is= %d\n",total_price[i]);
	printf("Discounted price is= %d\n",Discount_price);
	printf("Grand_total is is= %d\n",Grand_total);
		getch();
	return(0);
	}
