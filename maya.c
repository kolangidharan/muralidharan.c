#include <stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
	char a[10];
	int i,l,count=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
		count++;
		}
  }
  if(count==0)
  printf("No");
  else
  printf("Yes");
	getch();
}
