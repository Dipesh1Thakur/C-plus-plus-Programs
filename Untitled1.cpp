#include<stdio.h>
#include<conio.h>
int main(){
	int id[2],d[2],day[3],price[3],charge=0,total[2],discount[2],i,j;
	printf("Please enter the three days stock info\n");
	printf("---------------------------------------------\n----------------------------------------------------\n");
	for (i=0;i<2;i++){
		printf("customer id=>");
		scanf("%d\n",&id[i]);
		printf("Date=>");
		scanf("%d\n",&d[i]);
		printf("\n");
		printf("\n");	
		
		for(j=0;j<3;j++){
		printf("Day[%d]=>",j+1);
		scanf("%d\n",&day[j]);
		printf("Price[%d]=>",j+1);
		scanf("%d\n",&price[j]);
		charge+=day[j]*price[j];
		printf("day %d charges=%d\n",j+1,charge);
		
		}
	}
	getch();
	
}
