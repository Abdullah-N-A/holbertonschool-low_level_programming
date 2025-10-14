#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a specific index
 * @head: pointer to pointer to head node
 * @index: node index to delete (starts at 0)
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (!head || !*head)
		return -1;

	temp = *head;

	if (index == 0) {
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		kfree(temp);
		return 1;
	}

	while (temp && i < index) {
		temp = temp->next;
		i++;
	}

	if (!temp)
		return -1;

	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = temp->next;

	kfree(temp);
	return 1;
}
