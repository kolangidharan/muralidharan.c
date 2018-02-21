#include <stdio.h>
#include <conio.h>
void main()
{
	long int n,dig=0;
   scanf("%ld",&n);
   while(n!=0)
    { 
      n=n/10;
      dig++;
     }
printf("%ld",dig);
      return 0;
}
