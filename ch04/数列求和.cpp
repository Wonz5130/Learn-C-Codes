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
item=item*x/n;   //阶乘在这里：2
每一项往后多除一个数
s+=sign*item;
sign=-sign;
n++;
}while(fabs(item)>=1E-5);
printf("sum=%.2f\n",s);
return 0;
}