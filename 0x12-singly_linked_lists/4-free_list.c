#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - function to free nodes
 * @head: pointer to nodes
 */
void free_list(list_t *head)
{
	while (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
