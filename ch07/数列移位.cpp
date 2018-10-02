#include<stdio.h>
void move(int a[],int n,int b);
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},m,i;
	scanf("%d",&m);
	move(a,10,m);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
void move(int a[],int n,int b)
{
	int x[10],i,j=b;
	for(i=0;i<n;i++)
	{
		if(i<b)
			x[i]=a[n-b+i];
		else
			x[i]=a[i-b];
	}
	for(i=0;i<10;i++)
		a[i]=x[i];
}