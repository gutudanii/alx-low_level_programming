#include "lists.h"
#include <string.h>
/**
 * _strlen - returns the length of a string.
 * @s: character value.
 *
 *Return: i value
 */
int _strlen(const char *s)
{
int i;

for (i = 0; s[i] != 0; i++)
;
return (i);
}
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head:pointer so struct.
 * @str: string pointer.
 *
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newhead = (list_t *) malloc(sizeof(list_t));

if (newhead == NULL)
return (NULL);
newhead->str = strdup(str);
newhead->len = _strlen(str);
newhead->next = (*head);
(*head) = newhead;
return (newhead);
}
