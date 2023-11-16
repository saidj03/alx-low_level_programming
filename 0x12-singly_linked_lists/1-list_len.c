#include <stddef.h>
#include "lists.h"

/**
  *list_len - returns the number of elements in a linked list
  *@h: A pointer to the head of the linked list
  *Return: number of nodes
  */

size_t list_len(const list_t *h)
{
	unsigned int nodeCount = 0;

	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
