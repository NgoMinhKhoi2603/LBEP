#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int a[n];
	printf("Nhap %d so nguyen: ", n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int x;
	printf("Nhap so x = ");
	scanf("%d", &x);
	int luu=abs(a[0]-x), so=a[0], so1=a[0];
	for(i=0;i<n;i++){
		if(abs(x-a[i])<luu){
			luu=abs(x-a[i]);
		    so=a[i];
		} else if(abs(x-a[i])==luu&&a[i]!=so){
			so1=a[i];
		}
	}
	printf("Gia tri gan x nhat trong mang la: %d", so);
	if(so1!=a[0]&&abs(x-so1)==luu)
	printf(" va %d", so1);
}
