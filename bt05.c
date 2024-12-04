#include<stdio.h>
#include<string.h>

void Palindrome(char str[],int start,int end){
	if(start >= end){
		printf("Palindrome valid\n");
		return;
	};
	
	if(str[start] != str[end-1]){
		printf("Palindrome invalid\n");
		return; 
	}
	
	return Palindrome(str, start +1, end -1);
}

int main(){
	char str[100];
	
	printf("vui long nhap gia tri chuoi: ");
	scanf("%s",str);
	
	int length = strlen(str);
	Palindrome(str, 0, length);
	
	return 0;
}
