#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		printf("Nhap so a[%d] = ", i);
		scanf("%d", &a[i]);
		int k;
		for(k=0;k<i;k++){
			for(;a[i]==a[k];){
				printf("Nhap lai a[%d]: ",i);
				scanf("%d", &a[i]);
				k=0; 
			}
		}
	}
	printf("Ban da nhap dung");
}
