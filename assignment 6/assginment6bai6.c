#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int a[n];
	printf("Nhap %d so nguyen: ", n);
	int i, dem=0, luu=0;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			dem++;
			if(dem>luu)
			luu=dem;
		} 
		else {
			dem=0;
		}
	}
	printf("So luong cac so duong lien tiep nhieu nhat la %d", luu);
}
