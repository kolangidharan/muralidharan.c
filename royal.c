#include <stdio.h>
#include<conio.h>
int main()
{
  int n,k,a[20],i;
  printf("enter the two numbers");
  scanf("%d%d",&n,&k);
  printf("enter the numbres");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  
  }
  printf("%d",a[k]);
  
  return 0;
}
