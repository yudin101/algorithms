#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 100

int main (int argc, char *argv[]) {

	// Checking if multiple arguments have been passed
	if (argc != 2) {
		printf("Usage: %s <number>\n", argv[0]);
		return 1;
	}

	char *input = argv[1];
	int length = strlen(input);
	int num[MAX_DIGITS];
	int sum;

	// Converting to int and throwing error if failed
	for (int i = 0; i < length; i++) {
		if (input[i] >= '0' && input[i] <= '9') {
			num[i] = input[i] - '0';
		} else {
			printf("Usage: %s <number>\n", argv[0]);
			return 2;
		}
	}

	// Doubling the number and checking if larger than 9
	for (int i = 0; i < 16; i += 2) {
		num[i] *= 2;
		if (num[i] > 9)
		{
			num[i] -= 9;
		}
	}

	// Adding all numbers of array 
	for (int i = 0; i < 16; i++) {
		sum += num[i];
	}

	// Checking if the sum of numbers in the array is divisible by 10
	if (sum % 10 == 0) {
		printf("Valid\n");
	} else {
		printf("Invalid\n");
	}

	return 0;
}