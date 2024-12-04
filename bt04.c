#include<stdio.h>
#include<string.h>

void reverse(char string[], int start, int end){
	if(start >= end){
		return;
	}
	
	char temp = string[start];
	string[start] = string[end];
	string[end] = temp;
	
	return reverse(string, start +1, end-1);
};

int main(){
	char string[100];
	int length;
	
	printf("vui long nhap chuoi bat ky: ");
	scanf("%s", &string);
	
	length = strlen(string);
	
	reverse(string, 0, length -1);
	
	printf("mang sau khi dao nguoc là: %s", string);
	
	return 0;
}
