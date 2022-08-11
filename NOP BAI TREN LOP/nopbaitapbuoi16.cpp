#include <stdio.h>

bool ktsonguyento(int a){
	int i;
	int dem=0;
	for(i=2;i<=a/2;i++){
		if(a%i==0){
			dem++;
			break;
		}
	}
	if(dem==0)
	return true;
	return false;
} 

int main() {
	int a;
	printf("Nhap so a = ");
	scanf("%d", &a);
	if(ktsonguyento(a))
	printf("%d la so nguyen to", a);
	else
	printf("%d khong la so nguyen to", a);
}
