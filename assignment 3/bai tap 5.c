#include <stdio.h>

int main() {
	int a,b;
	printf("ngay: ");
	scanf("%d", &a);
	printf("thang: ");
	scanf("%d", &b);
	int c;
	if(b>2)
	c=2;
	else
	c=0;
	if((b-1)%2==0){
		int x=((b-1)/2)*31+((b-1)/2)*30-c+a;
		printf("ngay thu %d\n", x);
		if(x%7==0)
		printf("chu nhat");
		else
		printf("thu %d", (x%7)+1);
	} else {
		int x=(((b-2)/2)+1)*31+((b-2)/2)*30-c+a;
		printf("ngay thu %d\n", x);
		if(x%7==0)
		printf("chu nhat");
		else
		printf("thu %d", (x%7)+1);
	}
}
