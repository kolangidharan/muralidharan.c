#include<stdio.h>
#include<conio.h>
void main();
{
int c,d=0;
char s;
printf("enter the word");
scanf("%s",s);
c=strlen(s);
for(i=1;i<c;i++)
{
if(s='A'||s='E'||s='I'||s='O'||s='U'||s='a'||s='e'||s='i'||s='o'||s='u')
{
d=d+1;
}
}
printf("The given string vowels are..%d",d);
getch();
}
