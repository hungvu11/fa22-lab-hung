#include <stddef.h>
#include "ll_cycle.h"

node* move_slow(node *head)
{
    return head->next;
}

node* move_fast(node *head)
{
    if (head->next) head = head->next;
    else return NULL;
    return head->next;
}

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    node* ptr1 = head, *ptr2 = head;
    while (ptr1 && ptr2)
    {
        ptr1 = move_slow(ptr1);
        ptr2 = move_fast(ptr2);
        if (!ptr1 || !ptr2) return 0;
        if (ptr1 == ptr2) return 1;
    }
    return 0;
}
