#include "list.h"

void mx_pop_index(t_list **list, int index){

    if(*list == NULL || list == NULL) return;

    int size = 0;
    t_list *len = *list;
    while(len->next != NULL){
        size++;
        len = len->next;
    }

    if(index <= 0)
        mx_pop_front(list);
      
    
    if(index >= size){
        mx_pop_back(list);
    
    }
    
    t_list *current = *list;
    for(int i = 0; i < index - 1; i++)
        current = current -> next;
    

    if(current == NULL || !current->next->next) return;

    t_list *tmp = current->next->next;
    free(current->next);
    current->next = tmp;
    

}

