#include <stdio.h>

void apply_discount(int* price, int n, int percent) {

	for (int p = 0; p < n; p++) {
		price[p] = price[p] * (100 - percent) / 100;
	}

}

int main() {
	int dis = 0;
	int arr[5] = { 12000, 8500, 3000, 45000, 990 };
	printf("enter percentage : ");
	scanf_s("%d", &dis);
	printf("before discount: ");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("after discount: ");
	apply_discount(arr, sizeof(arr) / sizeof(arr[0]), dis);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}