#include "list.h"

void mx_push_index(t_list **list, void *data, int index){
    if(data == NULL) return;

    if(*list == NULL || list == NULL) return;

    int size = 0;
    t_list *len = *list;
    while(len != NULL){
        size++;
        len = len->next;
    }

    if(index <= 0)
        mx_push_front(list, data);
        return;
    
    if(index >= size){
        mx_push_back(list, data);
        return;
    }
    else{
        t_list *current = *list;
        for(int i = 0; i < index - 1; i++){
            current = current -> next;
    }

    t_list *node = mx_create_node(data);
    node->next = current->next;
    current->next = node;
    }

}

