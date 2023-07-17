#include "lists.h"

/**
 * pop_listint - the head node of a linked list is deleted
 * @head: pointing to the first element in the linked list
 * Return: deleted data inside the element,
 * or 0 if it is an empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
