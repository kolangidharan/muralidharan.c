#include<stdio.h>
#include<coni.h>
void main()
{
	char a[100];
	int b=0,e=1,i;
	printf("enter the words");
  scanf("%s",&a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='3 ')
		b=++e;
	}
	printf("%d",b);
  getch();
}
