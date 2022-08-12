#include <stdio.h>

int UCLN(int a, int b){
	int min;
	if(a>b)
	min=b;
	else
	min=a;
	int i;
	for(i=min;i>0;i--){
		if(a%i==0&&b%i==0){
			return i;
		}
	}
}

int main() {
	int a, b;
	printf("Nhap so a = ");
	scanf("%d", &a);
	printf("Nhap so b = ");
	scanf("%d", &b);
	printf("Uoc chung lon nhat cua %d va %d la %d", a, b, UCLN(a, b));
}
