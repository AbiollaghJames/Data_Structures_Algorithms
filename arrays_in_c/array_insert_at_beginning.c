#include "main.h"
/**
 * insert_at_beinning - inserts element at beginning of an array
 * @arr: Array to be used
 * @size: size of arr
 * @num: No to be inserted
 */
void insert_at_beginning(int arr[], int size, int num)
{
	int i;

	for (i = size - i; i >= 0; i--)
		arr[i + 1] = arr[i];

	arr[0] = num;
	size++;
}
