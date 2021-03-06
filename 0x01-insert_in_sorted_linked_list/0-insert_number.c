#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of new listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = malloc(sizeof(listint_t)), *tmp = *head;
	int i = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = number;
	new->next = *head;
	while (tmp)
	{
		if (new->n > tmp->n)
		{
			i = new->n;
			new->n = tmp->n;
			tmp->n= i;
		}
		if (tmp->next && tmp->n > tmp->next->n)
		{
			i = tmp->n;
			tmp->n = tmp->next->n;
			tmp->next->n= i;
		}
		tmp = tmp->next;
	}
	*head = new;
	return (new);
}