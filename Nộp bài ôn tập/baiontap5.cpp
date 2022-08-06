#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	printf("Nhap n so nguyen: "); 
	int a[n], b[n];
	int i, luu=0, so=0, dem=1;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("So xuat hien nhieu nhat la: ");
	for(i=0;i<n;i++){
		int k, loai=0;
		if(i!=0){
			for(k=i-1;k>=0;k--){
				if(a[i]==a[k])
				loai++;
			}
		}
		if(loai!=0){
			continue;
		}
		for(k=1;k<n-i;k++){
			if(a[i]==a[i+k]){
				dem++;
			}
		}
		if(dem>luu){
			luu=dem;
			so=0;
			b[so]=a[i];
			dem=1;
		}
		else
		if(dem==luu){
			so++;
			b[so]=a[i];
			dem=1;
		}
		dem=1;
	}
	for(i=0;i<=so;i++){
		printf("%d ", b[i]);
	}
}
