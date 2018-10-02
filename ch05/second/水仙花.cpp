#include<stdio.h>
#include<math.h>
int main(){
int i,x,y,z;
  for(i=100;i<=999;i++){
    x=i%10;
    y=i/10%10;
    z=i/100;
    z=pow(x,3)+pow(y,3)+pow(z,3);
    if(z==i)printf("%5d",i);}
  return 0;}