#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void print_array(int *arr, int size);
void reverse_array(int arr[], int size);
void search_element(int arr[], int size, int key);
void insert_at_position(int arr[], int size, int num, int pos);
void insert_at_beginning(int arr[], int size, int num);
void insert_at_end(int arr[], int size, int num);
void delete_at_pos(int arr[], int size, int pos);

#endif
