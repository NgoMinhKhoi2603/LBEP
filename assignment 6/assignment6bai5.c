#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	printf("Nhap %d so nguyen: ", n);
	int a[n];
	int i, min=-1;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			min=a[i];
			break;
		}
	}
	for(i=0;i<n;i++){
		if(min>a[i]&&a[i]>0)
		min=a[i];
	}
	if(min==-1)
	printf("Khong co so duong");
	else
	printf("So duong nho nhat = %d", min);
}
