#include "lists.h"

/**
<<<<<<< HEAD
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
=======
 *  * print_listint - prints all the elements of a linked list
 *   * @h: linked list of type listint_t to print
 *    *
 *     * Return: number of nodes
 *      */
size_t print_listint(const listint_t *h)
{
		size_t num = 0;

			while (h)
					{
								printf("%d\n", h->n);
										num++;
												h = h->next;
													}

				return (num);
>>>>>>> 2e04aaad926fc7c87481d8797e7fd428ddca2a8f
}
