#include "sort.h"
/**
 * insertion_sort_list - fxn
 * @list: value passed
 */


void insertion_sort_list(listint_t **list) {
    listint_t *current, *temp, *next;
    if (list == NULL || (*list) == NULL || (*list)->next == NULL) {
        return;
    }

    current = (*list)->next;
    while (current != NULL) {
        next = current->next;
        temp = current->prev;
        while (temp != NULL && current->n < temp->n) {
            current->prev = temp->prev;
            temp->next = current->next;
            if (current->next != NULL) {
                current->next->prev = temp;
            }
            current->next = temp;
            if (temp->prev != NULL) {
                temp->prev->next = current;
            } else {
                *list = current;
            }
            temp->prev = current;
            temp = current->prev;
            print_list(*list);
        }
        current = next;
    }
}
