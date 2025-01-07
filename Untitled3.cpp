#include<stdio.h>

int sum(int *ptr1,int *ptr2){
	int sum=(*ptr1)+(*ptr2);
	return sum; 
} 

int main(){
	int a=100;
	int b=200;
	printf("Tong bang %d",sum(&a,&b)) ;
	return 0; 
} 
