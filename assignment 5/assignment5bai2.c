#include <stdio.h>

int main() {
	int a, b;
	printf("nhap so a= ");
	scanf("%d", &a);
	printf("nhap so b= ");
	scanf("%d", &b);
	int max=a;
	if(b>max){
		max=b;
	}
	int i;
	for(i=max/2;i>0;i--){
		if(a%i==0&&b%i==0){
			printf("uoc chung lon nhat = %d\n", i);
			break;
		}
	}
	for(i=max;i!=0;i++){
		if(i%a==0&&i%b==0){
			printf("boi chung nho nhat = %d", i);
			break;
		}
	}
}
