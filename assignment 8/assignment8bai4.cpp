#include <stdio.h>

int BCLN(int a, int b){
	int max;
	if(a>b)
	max=a;
	else
	max=b;
	int i;
	for(i=max;i>=max;i++){
		if(i%a==0&&i%b==0){
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
	printf("Boi chung lon nhat cua %d va %d la %d", a, b, BCLN(a, b));
}
