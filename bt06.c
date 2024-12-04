#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n == 0) { 
        return 0;
    }
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main(){
	int n;
	int arr[100];
	
	printf("vui long nhap so luong phan tu:");
	scanf("%d", &n);
	
	
	for(int i=0; i<n; i++){
		printf("phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("%d",sumArray(arr,n));
	
	return 0;
}
