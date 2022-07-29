#include <stdio.h>

int main() {
	int n;
	printf("nhap so n= ");
	scanf("%d", &n);
	
	int tong=0;
	for(;n>0;){
		tong = tong + n%10;
		n=n/10;
	}
	printf("tong cac chu so cua n= %d", tong);
}
