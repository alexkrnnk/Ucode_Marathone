#include "list.h"

void mx_pop_back(t_list **list){
    if (*list == NULL || list == NULL) return;
        
    t_list *delete = *list;
    while(delete->next->next != NULL){
        delete = delete->next;
        
    }
    
    delete->next = delete;
    free(delete->next);
    delete->next = NULL;
}

