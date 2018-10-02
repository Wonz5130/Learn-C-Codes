/*#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int m;
	scanf("%d",&m);
	int b[10];
	int i,j;
	for(i=10-m,j=0;i<10;i++){
		b[j++]=a[i];}
	for(i=9;i>=m;i--){
		a[i]=a[i-m];}
	for(i=0;i<m;i++){
		a[i]=b[i];}
	for(i=0;i<10;i++){
	printf("%d ",a[i]);}
	return 0;}*/

#include<stdio.h>
void exchange(int a[]){
	int i=9;
	int *t=a+i;
	int *b;
	for(b=a+i-1;b>a;b--){
		b=


int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int m;
	scanf("%d",&m);
	int b[10];
	int i,j;
	for(i=10-m,j=0;i<10;i++){
		b[j++]=a[i];}
	for(i=9;i>=m;i--){
		a[i]=a[i-m];}
	for(i=0;i<m;i++){
		a[i]=b[i];}
	for(i=0;i<10;i++){
	printf("%d",a[i]);}
	return 0;}