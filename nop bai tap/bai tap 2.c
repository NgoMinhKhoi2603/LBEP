#include <stdio.h>
#include <math.h>

int main() {
	int a, b ,c;
	scanf("%d%d%d", &a, &b, &c);
	float x1, x2;
	int delta=b*b-4*a*c;
	if(delta>0) {
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("%f %f",(float) x1, x2);
	}
	else if(delta==0){
		x1=-b/(2*a);
		printf("%f",(float) x1);
	}
	else
	printf("vo nghiem");
}
