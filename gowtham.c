#include<stdio.h>
int main()
{
char a[1000],b[1000];
int c;
scanf("%s",a);
strcpy(b,a);
strrev(a);
c=strcmp(a,b);
if(c==0)
{
printf("YES");
}
else
{
printf("NO");
}
return0;
}
