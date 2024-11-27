#include <stdio.h>

int main() {
    int arr[] = {11, 24, 31, 34};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    printf("cac phan tu trong mang:\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", arr[i]);
    }
    
    printf("do dai cua mang: %d\n", length);

    return 0;
}
