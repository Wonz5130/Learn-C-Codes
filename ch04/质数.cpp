#include<stdio.h>
#include<math.h>
int main( )
{
int x,y,n=0,m;
for(x=100;x<1000;x++)
{
m=(int)sqrt(x);
for(y=2;y<=m;y++)
{
if(x%y==0)
break;
}
if(y>m)
{
n++;
printf("%6d",x);
if(n%5==0)
printf("\n");
}
}
printf("\n");
return 0;
}