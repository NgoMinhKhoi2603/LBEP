#include <stdio.h>

bool ktsonguyento(int a){
	if(a<2)
	return false; 
	
	int i;
	int dem=0;
	for(i=2;i<=a/2;i++){
		if(a%i==0){
			dem++;
			break;
		}
	}
	return dem==0;
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
