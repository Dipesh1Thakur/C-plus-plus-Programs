#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,price[5],cust[2],cust_id=12345,date,Discount_price,Grand_total,total_price[2]={};
	printf("Please enter number of customer =>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("customer id :%d\n",cust_id);
		cust_id++;
		printf("Date=");
		scanf("%d",&date);
		total_price[i]+=price[i];
		printf("please enter 5 price for customer %d\n",i+1);
	 
		for(j=0;j<5;j++)
		{
			printf("price[%d]=",j++);
			scanf("%d",&price[i]);
			
		}
	}
     for(i=0;i<n;i++)
     {
	 
	printf("customer id \n",cust_id);
	cust_id++;
	
	printf("total_price :%d",total_price[i]);
}

if (total_price[i]>=1500)
{
	Discount_price=total_price[i]*0.25;
	Grand_total= total_price[i] - Discount_price;
	printf("Discounted _price:%d\n",Discount_price);
	printf("price after discount :%d\n",Grand_total);
	
}
else if(total_price[i]>1000&&total_price[i]<1499)
{
	Discount_price=total_price[i]*0.15;
	Grand_total= total_price [i]- Discount_price;
	printf("Discounted _price:%d\n",Discount_price);
	printf("price after discount :%d\n",Grand_total);	
}
else if(total_price[i]>500&&total_price[i]<999)
{
		Discount_price=total_price[i]*0.1;
	Grand_total=total_price [i]- Discount_price;
	printf("Discounted _price:%d\n",Discount_price);
	printf("price after discount :%d\n",Grand_total);
	
}
else
{
	printf("Tax free");
}
getch();
return(0);

}
