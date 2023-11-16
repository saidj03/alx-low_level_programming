#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	unsigned int nodeCount;
	nodeCount = 0;
	current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		nodeCount++;
	}

	return (nodeCount);
}
