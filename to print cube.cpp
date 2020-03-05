// To print cube of any number 

#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n[5],a[5];
  printf("Enter the number ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  printf("%d",n[i]);
  a[i]=n[i]*n[i]*n[i];
}
  printf("cube is :%d",a[i]);
    getch();
    return 0;
}

