#include "list.h"

void mx_push_front(t_list **list, void *data){
    if(!data) return;    

    t_list *p = mx_create_node(data);   

    if (*list == NULL || list == NULL){
        *list = p;
        return;
    }

    p->next = *list;
    

    *list = p;
    
}

