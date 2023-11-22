#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first element of a list
 * @index: node desired position to retrieve
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
