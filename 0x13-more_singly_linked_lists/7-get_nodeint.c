#include "lists.h"

/**
 * get_nodeint_at_index - the node at a certain index in a linked list is returned
 * @head: 0 node in the linked list
 * @index: the node returns to index
 * Return: points to the node we are finding, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
