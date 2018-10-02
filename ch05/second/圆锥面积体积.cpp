#include<stdio.h>
#include<math.h>
#define pi 3.1415
double Area(double Radius,double Volume);
double Volume(double Radius,double Height);
int main(){
  double Radius,Height;
  scanf("%lf%lf",&Radius,&Height);
  printf("Radius=%.2f,Height=%.2f",Radius,Height);
  printf("Area=%.2f,Volume=%.2f",Area(Radius,Height),Volume(Radius,Height));
  return 0;}
double Area(double Radius,double Height){
  return (pi*Radius*Radius+pi*Radius*sqrt(Height*Height+Radius*Radius));}
double Volume(double Radius,double Height){
  return (1/3.0*pi*Radius*Radius*Height);}