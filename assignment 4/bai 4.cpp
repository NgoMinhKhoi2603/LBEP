#include <stdio.h>
#include <math.h> 

int main() {
	int n;
	scanf("%d", &n);
	 while(n>0){
	 	int a=n%10;
	 	printf("%d", a);
	 	n=n/10;
	 }
}
