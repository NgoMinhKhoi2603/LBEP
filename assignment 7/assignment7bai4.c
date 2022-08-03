#include <stdio.h>
#include <math.h>

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
	int doan;
	if(abs(max)>abs(min))
	doan=max;
	else
	doan=min;
	
	printf("Doan [%d,%d] chua tat ca gia tri cua mang", doan, doan);
}
