#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	printf("Nhap n so nguyen: "); 
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]); 
	}
	int luu=0; 
	for(i=0;i<n/2;i++){
		luu=a[i]; 
		a[i]=a[n-i-1];
		a[n-i-1]=luu; 
		
	}
	printf("Dao nguoc mang: ");
	for(i=0;i<n;i++){
		printf("%d ", a[i]); 
	} 
}
