#include<stdio.h>

int factorial(int n){
	
	if(n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}

int main(){
	int n;
	
	do{
		printf("vui long nhap gia tri cua n>=0: ");
		scanf("%d", &n);
	}while(n<0);
	
	printf("%d", factorial(n));
	
	return 0;
	
}
