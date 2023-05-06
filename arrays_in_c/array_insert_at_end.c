#include "main.h"
/**
 * insert_at_end - inserts an element at end of an array
 * @arr: Array in play
 * @size: size of the array
 * @num: No to be inserted
 */
void insert_at_end(int arr[], int size, int num)
{
	int i;

	for (i = 0; i < size; i++)
	{
		i = i + 1;
		arr[i - 1] = num;
	}
}
