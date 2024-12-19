#include<stdio.h>

void swap(int arr[], int swap1, int swap2) {
	int temp = arr[swap1];
	arr[swap1] = arr[swap2];
	arr[swap2] = temp;
}


void sort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int min = i;
		
		for (int j = i + 1; j < size; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}

		if (min != i) {
			swap(arr, i, min);
		}
	}	
}

void display(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int num[] = {3, 7, 5, 9, 2, 8, 1, 6, 4};
	int size = sizeof(num) / sizeof(num[0]);

	sort(num, size);
	display(num, size);

	return 0;
}
