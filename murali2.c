#include<stdio.h>
#include<conio.h>
void main()
{
int d[25],i,maxi=0;
for(i=0;i<=10;i++)
{
printf("enter the value");
  scanf("%d",&d[i]);
}
  for(i=0;i<=10;i++)
  {
if(maxi<d[i])
{
maxi=d[i];
}
  }
  printf("maximum element is %d",maxi);
getch();
}
