#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,count=0;
printf("enter the value\n");
scanf("%d",&a);
for(i=2;i<=(a/2);i++)
{
if(a%i==0)
{
count++;
}
if(count==0)
{
printf("prime");
}
else
{
printf("no prime");
}
}
}
