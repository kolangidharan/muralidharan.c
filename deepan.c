#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,o,p,q,s;
printf("Enter the number");
scanf("%d",&n);
m=n/100;
o=n%100;
p=o%10;
q=o/10;
s=m+p+q;
printf("sum of digit..:%d",s);
getch();
}
