#include <stdio.h>

int main() {
	int n;
	printf("Nhap so n= ");
	scanf("%d", &n);
	int a[n], i;
	printf("Nhap %d so nguyen: ", n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int max, max1;
	max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==max)
		a[i]=0;
	}
	
	printf("So lon nhat la: %d\n", max);
	max1=a[0];
	for(i=1;i<n;i++){
		if(max1<a[i]){
			max1=a[i];
		}
	}
	printf("So gan lon nhat la: %d", max1);
}
