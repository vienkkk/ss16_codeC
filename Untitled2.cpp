#include<stdio.h>

void after(int *ptr1,int *ptr2){
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp; 
} 

int main() {
	int a=100;
	int b=200 ;
	printf("Truoc khi thay doi %d %d\n",a,b); 
	after(&a,&b);
	printf("Sau khi thay doi %d %d",a,b); 
	return 0;
}
