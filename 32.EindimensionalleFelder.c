#include <stdio.h>

void printArray(int* array, int length) {
	int i;

	// Feld auslesen
	for (i = 0; i < length; i++)
		printf("%d ", array[i]);

	printf("\n");
}

int main(void) {
	int array[10];
	int i;
	// Feld mit Zahlen füllen
	for (i = 0; i < 10; i++)
		array[i] = i;

	printArray(array, 10);
	return 0;
}
