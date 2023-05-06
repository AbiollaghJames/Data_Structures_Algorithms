#include "main.h"
/**
 * delete_at_pos - deletes element at a position in array
 * @arr: array in play
 * @size: size of array
 * @pos: index to be deleted
 */
void delete_at_pos(int arr[], int size, int pos)
{
	int i;

	if (pos <= 0 || pos > size)
		return;

	for (i = pos - 1; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;
}
