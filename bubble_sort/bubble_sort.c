#include<stdio.h>

void sort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void display(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}


int main() {
	
	int num[] = {2, 4, 6, 2, 6, 9, 4, 2, 3, 7, 5};
	int size = sizeof(num) / sizeof(num[0]);

	sort(num, size);
	display(num, size);

	return 0;
}
