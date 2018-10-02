#include<stdio.h>
#include<math.h>
int judge_prime(int n)   //判断是否是质数
{
	if (n==1) return 0;
	else
	{
		int i,k;
		k=(int)sqrt(n);
		for (i=2;i<=k;i++)
		{
			if (n%i==0) break;
		}
		if (i>k) return 1;
		else return 0;
	}
}
int main()
{
	int i,j,k;
	for (i=4,k=0;i<=2000;i+=2)
	{
		for (j=2;j<i;j++)
		{
			if (judge_prime(j)&&judge_prime(i-j))
			{
				printf("%4d=%4d+%4d",i,j,i-j);
				k++;
				if (k%4==0) printf("\n");
				else printf(" ");
				break;
			}
		}
	}
	return 0;
}