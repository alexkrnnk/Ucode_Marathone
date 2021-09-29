#include "list.h"

void mx_clear_list(t_list **list){
    if(*list == NULL || list == NULL) return;

    free(*list);
    *list = NULL;

    
}

