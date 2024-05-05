#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, j, high;
	int temp;

	high = size - 1;
	/**loop to alterate through the array to end**/
	for (i = 0; i < high; i++)
	{
		/**loop to check what stored and arrange them**/
		for (j = 0; j < high - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				/*swapping*/
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
