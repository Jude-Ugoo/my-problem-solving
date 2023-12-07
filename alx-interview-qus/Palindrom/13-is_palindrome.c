#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: Pointer to the head of the list 
 * 
 * Return: 0 if not a palindrome, 1 if a palindrome
 */

int is_palindrome(listint_t **head)
{
    listint_t *slow, *fast, *prev_slow, *mid, *second_half;
    int palindrome = 1; /* Assume palindrome initially */

    if (*head == NULL || (*head)->next == NULL)
        return (palindrome); /* Empty list or single node is a palindrome */

    slow = *head;
    fast = *head;
    prev_slow = *head;

    /* Move fast two steps and slow one step, find mid of the list*/
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }

     /* If the number of elements is odd, move mid to the next node */
     if (fast != NULL)
     {
        mid = slow;
        slow = slow->next;
     }

     /* Reverse the second half of the list */
     second_half = reverse_list(&slow);

     /* Compare the reversed second half with the first half */
     while (second_half != NULL)
     {
        if (prev_slow->n != second_half->n)
        {
            palindrome = 0;
            break;
        }
        prev_slow = prev_slow->next;
        second_half = second_half->next;
     }

     /* Restore the reversed second half */
     reverse_list(&slow);

     return (palindrome);
}

/**
 * reverse_list - Reverses a linked list
 * @head_ref: Pointer to the head of the list
 * 
 * Return: Pointer to the new head of the reversed list.
 */

listint_t *reverse_list(listint_t **head_ref)
{
    listint_t *prev = NULL;
    listint_t *current = *head_ref;
    listint_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head_ref = prev; /* Update the head to the new head of the reversesd list */
    return *head_ref;
}

