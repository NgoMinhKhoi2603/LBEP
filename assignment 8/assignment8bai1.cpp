#include <stdio.h>

int tongcacchuso(int a){
	int i;
	int tong =0;
	for(i=1;a>0;i++){
		tong=tong+ a%10;
		a=a/10; 
	}
	return tong; 
}

 
int main(){
	int a;
	printf("Nhap so a = ");
	scanf("%d", &a);
	printf("tong cac chu so cua a la: %d", tongcacchuso(a)); 
}
