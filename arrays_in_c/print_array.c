#include <stdio.h>
#include "main.h"
/**
 * print_array - function that traverses and array and prints its elements
 * @arr: the array to be traversed and printed
 * @size: length / size of the array
 * Return: Nothing
 */
void print_array(int *arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);

		if (i != size - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
