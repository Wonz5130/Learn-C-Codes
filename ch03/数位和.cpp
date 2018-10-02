#include<stdio.h>
int main()
{
	int x,a,b,c;
	do{
		scanf("%d",&x);}
	while((x>-100&&x<100)||x>99912||x<-999);
		if(x<-100&&x>-999)
			x=-x;
	a=x%10;
	b=x/10%10;
	c=x/100;
	printf("%d\n",a+b+c);
	return 0;
}
