// WAP to write a file 
#include<stdio.h>

int main()
{
	FILE *fptr;
	int i;
	fptr=fopen("f:\\text.txt","w");
	if(fptr==NULL)
	{
		printf("\n File cannot be created");
	//	exit(0); 
     }
     else
     printf("Hello student \t be prepare for final exam");
       for(i=1;i<=10;i++)
       {
	   
     fputs("Welcome to the c programming \n\n",fptr);
 }
     fclose(fptr);
}

