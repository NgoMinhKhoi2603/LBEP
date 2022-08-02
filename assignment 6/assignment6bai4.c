#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	printf("Nhap %d so nguyen: ", n);
	int a[n];
	int i, b;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]%2==1)
		b=a[i];
	}
	printf("So le cuoi cung = %d", b);
}
