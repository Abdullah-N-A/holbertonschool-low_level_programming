🌟 SINGLY LINKED LIST OPERATIONS IN C 🌟

A complete demonstration of singly linked list operations in C, including printing, adding, counting, and freeing nodes.
This README is designed to be clear, visually striking, and easy to navigate.

📝 0. PRINT LIST

Description:
Prints all the elements of a singly linked list. Each node's string is displayed in order. If a node’s string is NULL, it will display (nil).

Purpose:
Quickly view the contents of the list and verify its structure.

🧮 1. LIST LENGTH

Description:
Returns the total number of nodes in the linked list. Traverses the entire list and counts each node.

Purpose:
Determines the size of the list, which is important for iterations, validations, and conditional operations.

➕ 2. ADD NODE

Description:
Adds a new node at the beginning of the linked list. A copy of the provided string is stored in the new node, which becomes the new head of the list.

Purpose:
Efficiently adds nodes at the start and is commonly used for stack-like behaviors.

➡️ 3. ADD NODE AT THE END

Description:
Adds a new node at the end of the linked list. The string is duplicated and assigned to the new node, which is appended after the last node.

Purpose:
Preserves the order of insertion, useful for queue-like structures.

🗑️ 4. FREE LIST

Description:
Frees all nodes in the linked list and releases the memory allocated for each string.

Purpose:
Ensures proper memory management and prevents memory leaks.

💡 Tip: Use these operations together to efficiently manage dynamic singly linked lists in C.
