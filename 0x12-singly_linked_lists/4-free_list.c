#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to struct.
 */
void free_list(list_t *head)
{
list_t *buf;

while (head != NULL)
{
buf = head;
head = head->next;
free(buf->str);
free(buf);
}
}
