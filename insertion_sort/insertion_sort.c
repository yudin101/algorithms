#include<stdio.h>

void sort(int arr[], int size) {
	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

void display(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int num[] = {5, 3, 6, 2, 8, 7, 1, 9, 4};
	int size = sizeof(num) / sizeof(num[0]);

	sort(num, size);
	display(num, size);

	return 0;
}
