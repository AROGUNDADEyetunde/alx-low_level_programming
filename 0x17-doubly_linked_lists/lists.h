#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/* Structure for a doubly linked list node */
typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototype */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
#endif /* LISTS_H */
