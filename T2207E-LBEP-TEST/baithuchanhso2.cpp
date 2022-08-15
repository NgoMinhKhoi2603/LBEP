#include <stdio.h>

int main() {
	int n, a[100];
	printf("Nhap so n = ");
	scanf("%d", &n);
	printf("Nhap %d so nguyen: ", n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int dem=0; 
	for(i=0;i<n;i++) {
		int k, dem2=0;
		for(k=2;k<=a[i]/2;k++){
			if(a[i]%k==0){
				dem2++;
				break;
			} 
		} 
		if(dem2==0){
				printf("%d ", a[i]);
				dem++;
			}
	}
	if(dem==0)
	printf("No prime number");
}
