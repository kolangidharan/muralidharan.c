#include<stdio.h>
#include<conio.h>
void main()
{
char n;
printf("Enter the sentences:");
scanf("%c",n);
if((n>='a' && n<='z') || (n>='A' && n<='Z') || (n>=0 && n<=9))
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
