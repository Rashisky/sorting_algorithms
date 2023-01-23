#include "sort.h"

/**
* insertion_sort_list - sorts a double linked list of integers in ascending
* order using the "Insertion sort" algorithm
* @sort_list: pointer to the first node
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *temp = *list;
    listint_t *next_1, *prev_1, *next_2, *prev_2, *temp_2;
    if (*list)
    {
        while(temp->next)
        {
            next_1 = temp->next;
            prev_1 = temp->prev;
            next_2 = temp->next->next;
            prev_2 = temp->next->prev;
            if (temp->n > temp->next->n)
            {
                temp->next = next_2;
                temp->prev = next_1;
                temp->next->prev = prev_2;
                next_1->next = temp;
                next_1->prev = prev_1;
                temp = next_1;

                temp_2 = temp->prev;
                while (temp_2->prev)
                {
                    next_1 = temp_2->next;
                    prev_1 = temp_2->prev;
                    next_2 = temp_2->next->next;
                    prev_2 = temp_2->next->prev;
                    if (temp_2->n > temp_2->next->n)
                    {
                        temp_2->next = next_2;
                        temp_2->prev = next_1;
                        temp_2->next->prev = prev_2;
                        next_1->next = temp_2;
                        next_1->prev = prev_1;
                        temp_2 = next_1;
                    }
                    temp_2 = temp_2->prev;
                }
            insertion_sort_list(list);
            temp = temp->next;
            }
        }
    }
}
