#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n: ");
	scanf("%d", &n);
	int a[n], i, tong=0, k=0;
	printf("Nhap %d so nguyen: ", n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]%2==1){
			tong=tong+a[i];
			k=k+1;
		}
	}
	printf("Trung binh cong cac so le la: %f",(float) tong/k);
}
