#include <stdio.h>

int main() {
	int mang[5] = {213, 421, 15, 1515, 5};
	int phanTuLonNhat = mang[0], phanTuNhoNhat = mang[0];
	int length = sizeof(mang)/sizeof(mang[0]);
	for (int i = 0; i< length; i++){
		//tim phan tu lon nhat
		if (phanTuLonNhat < mang[i]){
			phanTuLonNhat = mang[i];
		}
		//tim phan tu nho nhat
		if (phanTuNhoNhat > mang[i]){
			phanTuNhoNhat = mang[i];
		}
	}
	printf("phan tu lon nhat: %d\nphan tu nho nhat: %d", phanTuLonNhat, phanTuNhoNhat);
    return 0;
}
