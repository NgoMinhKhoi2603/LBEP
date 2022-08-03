#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int a[n];
	printf("Nhap %d so nguyen: ");
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	int max=a[0], min=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	
	printf("Doan [%d,%d] chua tat ca gia tri cua mang", min, max);
}
