#include<stdio.h>
void main()
{
	double F;
	int C;
	scanf("%lf",&F);
	F=(F-32)/1.8;
	F*=100;
	C=F+0.5;
	F=C/100.0;
	printf("%.2f\n",F);
}