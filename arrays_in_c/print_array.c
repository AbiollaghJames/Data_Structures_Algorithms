#include <stdio.h>
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

int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;

	print_array(array, 5);

	return (0);
}
