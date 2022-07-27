#include <stdio.h>

int main() {
	int n, i;
	int S=0;
	printf("So ban muon nhap: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		S+=i;
	}
	printf("Tong S =  %d", S);
	
}
