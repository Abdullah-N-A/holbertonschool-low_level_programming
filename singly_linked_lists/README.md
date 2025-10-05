SINGLY LINKED LIST OPERATIONS IN C
0. Print list

Write a function that prints all the elements of a linked list.

Prototype: size_t print_list(const list_t *h);

The function should print each element’s string, or (nil) if the string is NULL.

Returns the number of nodes in the list.

1. List length

Write a function that returns the number of elements in a linked list.

Prototype: size_t list_len(const list_t *h);

This function should traverse the list and count all the nodes.

2. Add node

Write a function that adds a new node at the beginning of a linked list.

Prototype: list_t *add_node(list_t **head, const char *str);

Returns the address of the new element, or NULL if it failed.

The new node should contain a copy of the string passed as an argument.

3. Add node at the end

Write a function that adds a new node at the end of a linked list.

Prototype: list_t *add_node_end(list_t **head, const char *str);

Returns the address of the new element, or NULL if it failed.

The string should be duplicated and stored in the new node.

4. Free list

Write a function that frees a linked list.

Prototype: void free_list(list_t *head);

This function should free all nodes and their strings.
