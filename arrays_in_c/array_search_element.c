#include <stdio.h>
#include "main.h"
/**
 * search_element - searches for specific element in an array
 * @size: size / length of the array
 * @key: element to be searched
 * Return: Nothing
 */
void search_element(int arr[], int size, int key)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (arr[i] == key)
			printf("Found\n");
	}
}
