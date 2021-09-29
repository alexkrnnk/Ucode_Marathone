#include "list.h"

void mx_pop_back(t_list **list){
           
    t_list *delete = *list;
    if (*list == NULL || list == NULL) return;
    while(delete->next->next != NULL){
        delete = delete->next;
        
    }
    
    t_list *second_delete = delete -> next;
    delete->next = NULL;
    free(second_delete);
}

