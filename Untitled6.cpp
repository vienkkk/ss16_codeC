#include<stdio.h>
int search(int a[],int *ptr){
	int b=7;
	ptr=&b;
	for(int i=0;i<6;i++){
		if(a[i]==(*ptr)){
		return i;	
		} 
	}
} 

int main(){
	int a[6]={1,2,4,5,6,7};
	printf("%d",search(a,a)); 
	return 0; 
} 
