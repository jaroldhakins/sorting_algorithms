#include "sort.h"
/**
 *selection_sort - selection sort algorithm method
 *@array: array of integers, pointer
 *@size: array size
 */
void selection_sort(int *array, size_t size)
{
	int aux = 0, aux_t = 0;
	size_t  i = 0, j = 0;

	if (array == NULL || size == 0)
		return;
	while (i < size)
	{
		aux = array[i];
		aux_t = j = i + 1;
		while (j < size)
		{
			if (aux > array[j])
			{
				aux = array[j];
				aux_t = j;
			}
			j++;
		}
		if (aux != array[i])
		{
			array[aux_t] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
		i++;
	}
}
