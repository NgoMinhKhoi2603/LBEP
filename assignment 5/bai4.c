#include <stdio.h>

int main() {
	int i;
	for(i=1;i<=5;i++){
		int j;
		for(j=1;j<=i;j++){
			int k;
			for(k=1;k<=j;k++){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
}
