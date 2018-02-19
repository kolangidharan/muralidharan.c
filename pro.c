#include<stdio.h>
#include<conio.h>
int main()
{
int a, b, c, d, e, f, g, h, i, j, p, q, w, x, y, z, large;
clrscr();
printf(" Enter any Ten integer numbers :  ") ;
scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j) ;
x = (a > b);
y = (c > d);
z = (e > f);
p = (g > h);
q = (i > j);
w = (x > y);
large = (p > q)||( p > w)||(q > w);
printf("\n\n The largest of 10 numbers using Conditional ternary Operator is : %d", large) ;
return 0;
}
