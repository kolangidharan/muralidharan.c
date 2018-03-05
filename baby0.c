#include<stdio.h>
#include<conio.h>
int main() 
{
int n,s,t,u;
printf("Enter a number:");
scanf("%d",&n);
s=n/2;
if(s%2==0)
{
u=2*s;
printf("\n The nearest power is:%d",u);
}
else
{
t=s-1;
u=2*t;
printf("\n The nearest power is:%d",u);
getch();
}
}
