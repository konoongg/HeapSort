#include <stdlib.h>
#include <stdio.h>
#include "func.h"


int main(void) {
	long size;
	if ((scanf("%ld", &size) == -1)) {
		return 0;
	}
	int* ms = (int*)malloc(size * sizeof(int));
	for (long i = 0; i < size; ++i) {
		if ((scanf("%d", &ms[i]) == -1)) {
			return 0;
		}
	}
	HeapSort(ms, size);
	for (long i = 0; i < size; ++i) {
		printf("%d ", ms[i]);
	}
	free(ms);
	return 0;
}

