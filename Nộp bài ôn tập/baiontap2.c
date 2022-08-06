#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int i, dem=0;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			printf("n khong phai so nguyen to"); 
			dem ++; 
			break; 
		}
	}
	if (dem==0)
	printf("n la so nguyen to");  
}
