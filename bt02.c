#include<stdio.h>

int sum(int n, int m){
	int sumNtoM;
	
	for(int i=n; i<=m; i++){
		sumNtoM += i;
	}
	
	return sumNtoM;
}

int main(){
	int n;
	int m;
	
	do{
		printf("nhap gia tri cua n: ");
		scanf("%d", &n);
		printf("\n");
		printf("nhap gia tri cua m > n: ");
		scanf("%d", &m);
		printf("\n");
	}while(n>=m);
	
	printf("%d", sum(n,m));
	
	return 0;
}
