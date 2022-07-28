#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i=n/2;
	while(i>0){
		if(n%i==0){
			printf("%d ", i);
		}
		i--;
	}
}
