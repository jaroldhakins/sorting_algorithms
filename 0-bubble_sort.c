#include "sort.h"
/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t aux, i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
