#include <stdio.h>

int main() {
	int n;
	printf("nhap so n= ");
	scanf("%d", &n);
	
	int max=n%10;
	for(;n>0;){
		int a = n%10;
		if(a>max){
			max=a;
		}
		n=n/10;
	}
	printf("chu so lon nhat cua n= %d", max);
}
