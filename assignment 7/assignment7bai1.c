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
	int luu=0, so=a[0], so1=a[0];
	for(i=0;i<n;i++){
		if(abs(x-a[i])>luu){
			luu=abs(x-a[i]);
			so=a[i];
		} else if(abs(x-a[i])==luu&&a[i]!=so){
			so1=a[i];
	    }
	}
	printf("Gia tri xa x nhat trong mang la: %d", luu);
	if(so1!=a[0])
	printf(" va %d", so1);
}
