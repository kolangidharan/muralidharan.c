include<stdio.h>
#include<conio.h>
void main()
{
	int h1,m1,h2,m2,timeh,timem;
    scanf("%d %d\n",&h1,&m1);
    scanf("%d %d\n",&h2,&m2);
    if(h2>h1)
    {
      timeh=h2-h1;

    }
    else
   {
      timeh=h1-h2;
   }
    if(m2>m1)
   {
      timem=m2-m1;
   }
   else
   {
      timem=m1-m2;
   }
   printf("%d %d",timeh,timem);
getch();
}
