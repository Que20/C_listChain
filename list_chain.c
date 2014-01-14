#include <stdio.h>
#include <stdlib.h>
#include "list_chain.h"

t_list_chain* list_chain_new(int val){
	t_list_chain* node = (t_list_chain*) malloc (sizeof(t_list_chain));
	node -> next = NULL;
	node -> value = val;
	return node;
}

void list_chain_display(t_list_chain* str){
    while(str != NULL){
        printf("%d",str -> value);
        str = str -> next;
    }
    printf("\n");
}

unsigned int list_chain_size(t_list_chain* str){
	int len = 0;
	while(str){
		len++;
		str = str -> next;
	}
	return len;
}

t_list_chain* list_chain_append(t_list_chain* str, int value){
	t_list_chain* node = str;
	if(str){
		t_list_chain* node = str;
	    while(node->next != NULL){
	        node=node->next;
	    }
	    node->next = list_chain_new(value);
	}
	else{
	    str = list_chain_new(value);
	}
	return str;
}

t_list_chain* list_chain_remove_index(t_list_chain* str, int index){
    int pos = 0;
    t_list_chain* temp;
    t_list_chain* node = str;
    if(list_chain_size(str)<=index)
        return str;
    if(index == 0){
        temp = str -> next;
        free(str);
        return temp;
    }
    while(pos+1 < index){
        str = str -> next;
        pos++;
    }
    temp = str -> next;
    str -> next = str -> next -> next;
    free(temp);
    return node;
}

t_list_chain* list_chain_insert(t_list_chain *t, int index, int value){
    // Si l'index est plus grand que la taille
    if (index > list_chain_size(t)){
        return t;
    }
    t_list_chain* new_element = list_chain_new(value);
    t_list_chain* tmp = t;
    // Si on insert au début, on fusionne les 2 listes
    if (index == 0){
        new_element->next = tmp;
        return new_element;
    }
    int i;
    // On se déplace jusqu'a ce que l'élément pointé soit la valeur de l'index
    for (i = 0; i < index-1; i++){
        tmp = tmp->next;
    }
    t_list_chain* tail = tmp->next;
    new_element->next = tail;
    tmp->next = new_element;
    return t;
}

void list_chain_append_satan_edition(t_list_chain ** t, int v ){
    while (*t){
        t = &((*t)->next);
        *t = list_chain_new(v);
    }
}

void list_chain_insert_v2(t_list_chain** t, unsigned int index, int value){
   while ((index > 0) && (*t != NULL)) {
        t = &((*list)->next);
        index -= 1;
    }

    if (index == 0 && (*list)) {
        t_list_chain* new_list = (t_list_chain*) malloc(sizeof (t_list_chain));
        if (new_list) {
            new_list->value = value;
            new_list->next = *list;
            (*list) = new_list;
        }
    }
}

void list_chain_remove_v2(t_list_chain** t, unsigned int index) {
    while ((index > 0) && (*t != NULL)) {
        t = &((*list)->next);
        index -= 1;
    }

    if (index == 0 && (*list)) {
        t_list_chain* save = (*list);
        (*list) = (*list)->next;

        free(save);
        save = NULL;
    }
}

t_list_chain* list_chain_revert(t_list_chain** list){
    t_list_chain* result = NULL, tmp;
    while(list){
        tmp = list_chain_new(list->value);
        tmp -> next = result;
        result = tmp;
    }
    return result;
}
