#include "main.h"
#include <stdio.h>
/**
 * insert_at_position - inserts element at a specific pos
 * @arr: Given array
 * @size: Size of the array
 * @num: Number to be inserted
 * @pos: position of insertion
 */
void insert_at_position(int arr[], int size, int num, int pos)
{
	int i;

	if (pos <= 0 || pos > size)
		return;

	for (i = size - 1; i >= pos - 1; i--)
		arr[i + 1] = arr[i];

	arr[pos - 1] = num;
	size++;
}
