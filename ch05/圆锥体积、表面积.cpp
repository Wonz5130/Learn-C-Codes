#include<stdio.h>
#include<math.h>
#define Pi 3.1415927
double Volume(double h,double r)
{
	double v;
	v=0.333333*Pi*r*r*h;
	return v;
}
double Area(double h,double r)
{
	double a,l;
	l=sqrt(h*h+r*r);
	a=Pi*r*l+Pi*r*r;
	return a;
}
int main()
{
	double h,r;
	scanf("%lf%lf",&h,&r);
	printf("Radius=%.2f,Height=%.2f,Area=%.2f,Volume=%.2f",h,r,Area(r,h),Volume(r,h));
	return 0;
}