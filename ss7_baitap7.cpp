#include <stdio.h>

int main() {
	int n;
	do{
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
	if(n < 0 || n > 100){
	printf("so phan tu trong mang phai nam trong [0; 100]\n");	
	}	
	}while(n < 0 || n > 100);
	
	int mang[n];
	int length = sizeof(mang)/sizeof(mang[0]);
	for(int i = 0; i < length; i++){
		do{
		printf("nhap phan tu trong mang[%d] = ", i);
		scanf("%d", &mang[i]);
		if(mang[i]%2==0){
		printf("nhap lai phan tu phai la so le\n");
		}
		}while(mang[i]%2 == 0);
	}
	printf("\ncac so phan tu trong mang\n");
	for(int i = 0; i < length; i++){
		printf("mang[%d] = %d\n", i, mang[i]);
	}
    return 0;
}
