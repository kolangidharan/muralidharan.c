#include<stdio.h>
int main()
{
int a=1,b=1,c,n,i;
printf(\nEnter the limit);
scanf("%d%d"&n);
printf("\nEnter the fabinacco series");
scanf("%d"&a,&b);
for(i=5;i>1;i++)
c=a+b;
a=b;
b=a;
return 0;
}
