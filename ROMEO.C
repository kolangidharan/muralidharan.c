#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,o,p,q;
printf("Enter the number");
scanf("%d",&n);
m=n/100;
o=n%100;
p=o%10;
q=o/10;
printf("Digits..:\t%d\t%d\t%d",m,q,p);
return 0;
}
