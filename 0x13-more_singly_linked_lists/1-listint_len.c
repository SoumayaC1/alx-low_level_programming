#include "lists.h"

/**
<<<<<<< HEAD
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
=======
 *  * listint_len - returns the number of elements in a linked lists
 *   * @h: linked list of type listint_t to traverse
 *    *
 *     * Return: number of nodes
 *      */
size_t listint_len(const listint_t *h)
{
		size_t num = 0;

			while (h)
					{
								num++;
										h = h->next;
											}

				return (num);
>>>>>>> 2e04aaad926fc7c87481d8797e7fd428ddca2a8f
}
