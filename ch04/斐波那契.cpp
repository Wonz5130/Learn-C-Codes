#include<stdio.h>
int main()
{
int f1,f2,f3,i=2;
f1=1;
f2=1;
printf("%d %d ",f1,f2);
while(i<10)
{
f3=f1+f2;
printf("%d ",f3);
f1=f2;
f2=f3;
i++;
}
printf("\n");
return 0;
}