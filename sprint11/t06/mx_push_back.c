#include "list.h"

void mx_push_back(t_list **list, void *data){
    if(!data) return;  
    
    t_list *p = mx_create_node(data);

    t_list *tmp = *list;

    if (*list == NULL || list == NULL){
        *list = p;
        return;
    }

    while(tmp->next != NULL)
        tmp = tmp->next;
    
    

    tmp->next = p;

}

