#include "sort.h"

/**
* insertion_sort_list - sorts a double linked list of integers in ascending
* order using the "Insertion sort" algorithm
* @list: pointer to the first node to be re-organized
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	listint_t *temp2, *temp3;

	if (*list)
	{
		while (temp->next)
		{
			if (temp->n > temp->next->n)
			{
				temp2 = temp3 = temp;
				temp = temp->next;

				temp2->next = temp->next;
				if (temp->next)
					temp->next->prev = temp->prev;
				temp->next = temp2; /*temp->next = temp->prev*/
				temp->prev = temp2->prev;
				if (temp2->prev)
					temp2->prev->next = temp;
				temp2->prev = temp;
				print_list(*list);
				temp2 = temp;

				if ((temp2->prev) && (temp2->prev->n > temp2->n))
					sort_list(list, temp2);
			}
			temp = temp->next;
		}
	}
}


/**
* sort_list - sorts a double linked list of integers in ascending
* order by continuous lower value backward
* @list: pointer to the original list
* @data_position: pointer to the data to be moved backward
*/

void sort_list(listint_t **list, listint_t *data_position)
{
	listint_t *temp3, *temp2 = data_position;

	while (temp2->prev)
	{
		temp3 = temp2->prev;
		if (temp3->n > temp2->n)
		{
			temp3->next = temp2->next;
			if (temp2->next)
				temp2->next->prev = temp2->prev;
			temp2->next = temp2->prev;
			temp2->prev = temp3->prev;
			temp3->prev = temp2;
			if (temp2->prev)
				temp2->prev->next = temp2;
			if (temp2->prev == NULL)
				*list = temp2;
			print_list(*list);
		}
		else
		break;
	}
}
