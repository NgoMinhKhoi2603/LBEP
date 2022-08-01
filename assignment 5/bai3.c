#include <stdio.h>

int main() {
	int i;
	for(i=0;i<5;i++){
		int j;
		for(j=1;j<=i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
}
