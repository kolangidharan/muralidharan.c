#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,p;
    scanf("%d %d",&n,&m);
    p=n*m;
    if(p%2==0)
    printf("even");
    else
    printf("odd");
    return 0;
    getch();
}
