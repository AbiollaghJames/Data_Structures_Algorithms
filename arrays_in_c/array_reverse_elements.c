#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function that traverses through an array and reverses its elements
 * @arr: array to be traversed
 * @size: size / length of the array
 * Return: Nothing
 */
void reverse_array(int arr[], int size)
{
	int i, temp;

	for (i = 0; i < size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}
