#include <stdio.h>

int main() {
    int arr[5];
    
    for(int i = 0; i<= 5; i++){
    	printf("nhap cac phan tu vao chi so %d: ", i);
    	scanf("%d", &arr[i]);
	}
	printf("cac phan tu trong mang:\n");
	
	for(int i = 0; i<= 5; i++){
    	printf("%d\n", arr[i]);
	}
    return 0;
}
