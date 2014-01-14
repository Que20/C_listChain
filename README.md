C_listChain
===========

Les listes chaînées en C<br>
<br>
Dernière édition : 14/01/14<br>
Dernière compilation : 14/01/14<br>
<br>
Fonctions :<br>
t_list_chain* list_chain_new(int val);<br>
void list_chain_display(t_list_chain* str);<br>
unsigned int list_chain_size(t_list_chain* str);<br>
t_list_chain* list_chain_append(t_list_chain* str, int value);<br>
t_list_chain* list_chain_remove_index(t_list_chain* str, int index);<br>
t_list_chain* list_chain_insert(t_list_chain *list, int index, int value);<br>
void list_chain_append_satan_edition(t_list_chain ** list, int v);<br>
void list_chain_insert_v2(t_list_chain** list, unsigned int index, int value);<br>
void list_chain_remove_v2(t_list_chain** list, unsigned int index, int value);<br>
t_list_chain* list_chain_revert(t_list_chain** list);<br>
