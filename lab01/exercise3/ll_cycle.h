#ifndef LL_CYCLE_H
#define LL_CYCLE_H

typedef struct node {
    int value;
    struct node *next;
} node;

node* move_slow(node* head);
node* move_fast(node* head);
int ll_has_cycle(node *);

#endif // LL_CYCLE_H
