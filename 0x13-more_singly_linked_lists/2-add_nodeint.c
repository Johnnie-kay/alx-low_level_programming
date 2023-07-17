#include "lists.h"

/**
 * add_nodeint - at the beginning of a linked list a new node is added
 * @head: points to the first node in the list
 * @n: data to insert in that new node
 * Return: points to the new node, NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
