// WAP to write a file 
#include<stdio.h>

int main()
{
	FILE *fptr;
	char s[100],i;
	fptr=fopen("f:\\text.txt","r");
	if(fptr==NULL)
	{
		printf("\n File cannot be created");
	//	exit(0); 
     }
     fgets(s,100,fptr);
     printf("\n The text form file is \t%s",s);
     for(i=1;i<=10;i++)
     {
	 
     fclose(fptr);
} 
}
