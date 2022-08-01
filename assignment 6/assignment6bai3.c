#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	printf("Nhap %d so nguyen: ", n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int x;
	printf("Nhap so x = ");
	scanf("%d", &x);
	int k=0;
	for(i=0;i<n;i++){
		if(x==a[i]){
			k++;
			break;
		}
	}
	if(k==1)
	printf("x co xuat hien trong mang");
	else
	printf("x khong xuat hien trong mang");
}
