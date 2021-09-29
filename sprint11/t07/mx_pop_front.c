#include "list.h"

void mx_pop_front(t_list **list){
    if (*list == NULL || list == NULL) return;
        
    t_list *delete = *list;
    *list = (*list) -> next;
    free(delete);
}

