#include <stdio.h>

int CVtamgiac(int a, int b, int c){
	int CV=a+b+c;
	return CV;
}

int main(){
	int a, b, c;
	printf("Nhap 3 canh cua tam giac: ");
	scanf("%d%d%d", &a, &b, &c);
	if(a+b>c&&a+c>b&&b+c>a)
	printf("Chu vi = %d", CVtamgiac(a, b, c));
	else
	printf("Khong phai 3 canh cua tam giac");
}
