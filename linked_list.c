/* Singly Linked List by Andrew Li
* functions include init_list, push, free print
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

// define object(s) here
#define object_type int
#define object_var integer

struct slinked_list {
    // if you want, you can set a new structure here, ie like a real node
    // contains one object and a pointer to next
    object_type object_var;

    struct slinked_list *next;
};

struct slinked_list *allocate () {
    // inits singly linked list in memory and sets next as NULL,
    // also returns the linked list
    // if memory cannot be allocated, the program ends
    struct slinked_list *list; 

    list = (struct slinked_list *)malloc(sizeof(struct slinked_list) * 1);

    // if memory cannot be located, exit program
    if (list == NULL) {
        printf("Unable to allocate memory");
        exit(1);
    }

    list->next = NULL;

    return(list);
}

struct slinked_list *push(struct slinked_list *current, object_type new_item) {
    // given the linked list and a new element, 
    // the new element will be appended to the list

    // allocate memory for new node
    current->next = allocate();
    current = current->next;
    current->object_var = new_item;

    return(current);
}

void clear(int count, ...) {
    // clears pointers and excepts a variable amount of list nodes given the count as the first arg
    va_list lst;
    // free(list);
}

void print(struct slinked_list *first) {
    while (first != NULL) {
        printf("The number: %d", first->object_var);
        putchar('\n');
        first = first->next;
    }
}

int main() {
    // inits list
    struct slinked_list *first, *current;
    
    first = allocate();
    current = first;
    current->object_var = 4;
    
    // appends to list
    current = push(current, 10);
    current = push(current, 11);
    current = push(current, 13);

    // printf("%d", first->object_var);

    print(first);

    // clear pointer
    // clear(2, first, current);

    return(0);
}
