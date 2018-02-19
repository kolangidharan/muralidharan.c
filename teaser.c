#include <stdio.h>
void main()
{
int i, n,first=0,next=1,sum;
clrscr();
printf("Enter series range:");
scanf("%d",&n);
printf("Fibonacci Series:");
for(i=0;i<n;i++)
{
printf("\n%d",first);
sum=first+next;
first=next;
next=sum;
}
getch();
}
