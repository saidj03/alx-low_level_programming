#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the address of the head of listint_t
 * @n: integer for the node to contain
 *
 * Return: address of the new element, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
