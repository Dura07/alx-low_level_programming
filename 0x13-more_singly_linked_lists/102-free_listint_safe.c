#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)

{
	listint_t *current;

	size_t count = 0;

	while (*h != NULL)

	{
		count++;
		current = *h;
		if (current == current->next)

		{
			*h = NULL;
			free(current);
			break;
		}

		*h = current->next;
		free(current);
	}

	*h = NULL;
	return (count);
}
