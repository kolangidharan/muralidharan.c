#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
long c=1;
printf("Enter the base number");
scanf("%d",&a);
printf("Enter the exponent number");
scanf("%d",&b);
while(b!=0)
{
c*=a;
b--;
}
printf("The result is :%lld",c);
return 0;
}
