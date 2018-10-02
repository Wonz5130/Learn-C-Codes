#include<stdio.h>
int main()
{
	int a,gcd,d;
	scanf("%d%d",&a,&gcd);
	d=a%gcd;
	while(d!=0)
	{
		a=gcd;
		gcd=d;
		d=a%gcd;
	}
	printf("gcd=%d",gcd);
	return 0;
}