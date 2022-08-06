#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int i; 
	float S=0;
	for(i=1;i<=n;i++) {
		S=S+(1/(float)i); 
	}
	printf("S = %f", S); 
}
