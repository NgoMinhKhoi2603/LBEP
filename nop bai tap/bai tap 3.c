#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	int Cv, p, S;
	scanf("%d%d%d", &a, &b, &c);
	if(a+b<=c)
	printf("khong phai 3 canh cua tam giac");
	else if(a+c<=b)
	printf("khong phai 3 canh cua tam giac");
	else if(b+c<=a)
	printf("khong phai 3 canh cua tam giac");
	else {
		Cv=a+b+c;
		p=Cv/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%d %d", Cv, S);
	}
}
