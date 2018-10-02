#include<stdio.h>
#include<math.h>
int JudgePrime(int x){
	int i,t=1;
	for(i=2;i<=int(sqrt(x));i++){
		if (x%i==0) t=0;}
	return t;}
int main(){
	int i,j,n=1;
	/*printf("       4=   2+   2");*/
	printf("%8d=%4d+%4d",4,2,2);  //4在JudgePrime里面算不出来
    /*printf("%8d=%4d+%4d",6,3,3);
	printf("%8d=%4d+%4d",8,3,5);  */
	for(i=6;i<=2000;i=i+2){
		for(j=2;j<i;j++){
			if((JudgePrime(j)==1)&&(JudgePrime(i-j)==1))
			{printf("%8d=%4d+%4d",i,j,i-j);
			n++;
			if(n%4==0)printf("\n");
			break;}}}
	return 0;} 