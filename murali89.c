#include <stdio.h>

int main() 
{
	float p,r,res;
	int si,t;
	scanf("%f %d %f",&p,&t,&r);
	res=((p*t*r)/100);
	si=floor(res);
	printf("\n%d",si);
	return 0;
}
