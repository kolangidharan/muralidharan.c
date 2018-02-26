#include<stdio.h>
int main()
{
    int a[10],n,i,b;
    printf("Enter the count");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            b=a[i];
            a[i]=a[i+1];
            a[i+1]=b;
        }
    }
    printf("The largest number is %d",a[n-1]);
return 0;
}
