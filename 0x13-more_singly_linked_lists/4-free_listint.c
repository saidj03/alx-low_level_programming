#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the address of the head of listint_t
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
