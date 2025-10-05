Singly Linked List Common Operations Explained

0. Print List
Traverse the list from the head node to the end, printing each node’s data until you reach a node that points to NULL.

1. List Length
Count the total number of nodes by starting at the head and moving through each node until the end, incrementing a counter for every node visited.

2. Add Node at Beginning
Create a new node and set its next pointer to the current head of the list. Then update the head to point to this new node, effectively inserting it at the front.

3. Add Node at End
Create a new node with its next pointer set to NULL. Traverse the list starting from the head until you find the last node (the one pointing to NULL). Update this last node’s next pointer to point to the new node, adding it at the end.

4. Free List
To avoid memory leaks, go through the list and free the memory allocated for each node, starting from the head and moving forward, until all nodes have been deallocated. Finally, set the head pointer to NULL.
