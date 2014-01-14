C_listChain
===========

Les listes chaînées en C

Dernière édition : 14/01/14
Dernière compilation : 14/01/14

Fonctions :
t_list_chain* list_chain_new(int val);
void list_chain_display(t_list_chain* str);
unsigned int list_chain_size(t_list_chain* str);
t_list_chain* list_chain_append(t_list_chain* str, int value);
t_list_chain* list_chain_remove_index(t_list_chain* str, int index);
t_list_chain* list_chain_insert(t_list_chain *list, int index, int value);
void list_chain_append_satan_edition(t_list_chain ** list, int v);
void list_chain_insert_v2(t_list_chain** list, unsigned int index, int value);
void list_chain_remove_v2(t_list_chain** list, unsigned int index, int value);
t_list_chain* list_chain_revert(t_list_chain** list);
