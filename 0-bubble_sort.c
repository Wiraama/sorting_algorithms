#include "sort.h"

/**
 * bubble_sort - main entry point
 *  description: function that sorts an array of integers in
 *  ascending order using the Bubble sort algorithm
 * @array: array keeping the valoues
 * @size: size of the array
 * Return: void to main
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, high;
	int temp;

	high = size - 1;
	if (array == 0 || size == 0)
		return;
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
