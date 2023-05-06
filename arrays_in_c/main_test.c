#include <stdio.h>
#include "main.h"

int main(void)
{

	int a[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	search_element(a, sizeof(a) / sizeof(int), 98);
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	/*for this to work, arr[size] has to be decalared otherwise you loose the last value */
	insert_at_position(a, sizeof(a) / sizeof(int), 200, 5);
	print_array(a, sizeof(a) / sizeof(int));
	insert_at_beginning(a, sizeof(a) / sizeof(int), 350);
	print_array(a, sizeof(a) / sizeof(int));	
	insert_at_end(a, sizeof(a) / sizeof(int), 676);
	print_array(a, sizeof(a) / sizeof(int));
	delete_at_pos(a, sizeof(a) / sizeof(int), 4);
	print_array(a, sizeof(a) / sizeof(int));

	return (0);
}
