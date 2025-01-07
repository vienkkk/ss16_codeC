#include<stdio.h>

void print(int *ptr1,int a[] ) {
	for(int i=0; i<5; i++) {
		printf("%d ",*(ptr1+i)) ;
	}
	printf("\n"); 
}
void addINdex (int vitri,int them,int a[]) {
	vitri=3;
	them=7;
	a[vitri]=them;
}
int main() {
	int a[5]= {1,2,3,4,5};
	printf("Mang truoc\n");
	print(a,a);
	addINdex(3,7,a);
	printf("Mang sau \n");
	print(a,a);
	return 0;
}
