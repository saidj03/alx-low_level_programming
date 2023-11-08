#include "function_pointers.h"

/**
  *array_iterator -  executes a function given as a
  *parameter on each element of an array.
  *@array: a pointer to array in type int
  *@size: size of the array
  *@action: a ponter to the function
  *Return: Always 0
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterate;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
