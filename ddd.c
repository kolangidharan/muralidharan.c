#include <stdio.h>

int main(void) {
           int a[100],n,i,j,temp;
           int median=0;
           scanf("%d",&n);
           for(i=0;i<n;i++)
           scanf("%d",&a[i]);
           for(i=0;i<n;i++)
           {
           	for(j=i+1;j<n;j++)
           	{
           		if(a[j]<a[i])
           		{
           	               temp=a[j];
           	               a[j]=a[i];
           	               a[i]=temp;
           		}
           	}
           
           }
          if(n%2==0) {
        
        median=((a[n/2] + a[n/2 - 1]) / 2.0);
        printf("%d",median);
    } else {
      
        median=a[n/2];
        printf("%d",median);
    }
          
           
	return 0;
}
