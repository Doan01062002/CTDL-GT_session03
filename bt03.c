#include<stdio.h>

int fibonanci(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fibonanci(n-1) + fibonanci(n-2);
	}
}

int main(){
	int n;
	
	do{
		printf("vui long nhap gia tri cua n>=0: ");
		scanf("%d", &n);
	}while(n<0);
	
	printf("\n");
	printf("chuoi fibonanci: ");
	for(int i=0; i<n; i++){
		printf("%d", fibonanci(i));
	}
	
	return 0;
}
