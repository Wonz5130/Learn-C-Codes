#include<stdio.h>
#include<math.h>
int main()
{
double s,x,item;
int n,sign;
scanf("%lf",&x);
s=0;
n=1;
sign=1;
item=1;
do
{
item=item*x/n;   //�׳������2
ÿһ��������һ����
s+=sign*item;
sign=-sign;
n++;
}while(fabs(item)>=1E-5);
printf("sum=%.2f\n",s);
return 0;
}