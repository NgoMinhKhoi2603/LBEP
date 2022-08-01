#include <stdio.h>

int main() {
	int i;
	for(i=0;i<5;i++){
		int j;
		if(i%2==0){
			for(j=0;j<5;j++){
				printf("* ");
			}
		} else {
			for(j=0;j<4;j++){
				printf("* ");
			}
		}
		printf("\n");
	}
}
