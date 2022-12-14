#include <stdlib.h>
#include <stdio.h>
#include "func.h"

void Swap(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
}


void Heapify(int* ms, long size, long index) {
	long larges = index;
	long left = 2 * index + 1;
	long right = 2 * index + 2;
	if (left < size && ms[left] > ms[larges]) {
		larges = left;
	}
	if (right < size && ms[right] > ms[larges] ) {
		larges = right;
	}
	if (larges != index) {
		Swap(&ms[index], &ms[larges]);
		Heapify(ms, size, larges);
	}
}


void HeapSort(int* ms, long size) {
	for (long i = size / 2 - 1; i >= 0; --i) {
		Heapify(ms, size, i);
	}
	for (long i = size - 1; i >= 0; --i) {
		Swap(&ms[0], &ms[i]);
		Heapify(ms, i, 0);
	}
}

