#include <stdio.h>

int main() {
	int n;
	printf("nhap so n= ");
	scanf("%d", &n);
	
	for(;n>10;){
		n=n/10;
	}
	printf("chu so dau tien cua n= %d", n);
}
