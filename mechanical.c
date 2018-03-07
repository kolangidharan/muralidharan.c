#include<stdio.h>
int main()
{
int a,b,c,i,d=0;
scanf("%d",&a);
printf("range ");
scanf("%d%d",&b,&c);
for(i=b;i<=c;i++)
{
if(i==a)
{
d=1;
}
else
{
}
}
if(d==1)
{
    printf("yes");
}
else
{
    printf("no");
}
return0;
}
