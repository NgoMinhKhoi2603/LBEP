#include <stdio.h>


int main() {
	int n;
	printf("nhap so n= ");
	scanf("%d", &n);
	int tong=0;
	int i;
	for(i=1;i<n;i++){
		if(n%i==0)
		tong=tong+i;
	}
	printf("tong uoc = %d", tong);
}
