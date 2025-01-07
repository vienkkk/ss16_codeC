#include<stdio.h>


int main() {
	int a=100;
	int *ptr=&a;
	printf("Day la gia tri cua bien %d\n",a);
	printf("day la dia chi cua con tro %p\n",&a) ;
	printf("day la gia gi cua bien con tro %d\n",*ptr);
	printf("day la dia chi cua con tro %p",&ptr) ;
	return 0;
}
