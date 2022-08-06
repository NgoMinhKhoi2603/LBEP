#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int i, a[n];
	a[0]=0;
	a[1]=1; 
	for(i=2;i<=n;i++) {
		a[i]=a[i-1]+a[i-2]; 
	}
	printf("So thu n trong day fibonaci la: %d", a[n]); 
}
