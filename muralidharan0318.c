#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,s;
  printf("enter the numbers");
  scanf("%d%d",&a,&b);
  c=a*b;
  s=a*a;
  if(c==s)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
getch();
