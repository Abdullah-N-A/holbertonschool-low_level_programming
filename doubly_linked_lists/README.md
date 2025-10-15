# Doubly Linked Lists

This project is part of the Holberton School low-level programming track.  
It focuses on the implementation and manipulation of **doubly linked lists** in C.

---

## 📘 **Description**

A **doubly linked list (DLL)** is a linear data structure where each node contains:
- An integer data (`n`)
- A pointer to the previous node (`prev`)
- A pointer to the next node (`next`)

This allows traversal in both directions — forward and backward — unlike a singly linked list.

---

## 📂 **Files and Functions**

| File | Function | Description |
|------|-----------|-------------|
| **0-print_dlistint.c** | `size_t print_dlistint(const dlistint_t *h);` | Prints all the elements of a `dlistint_t` list and returns the number of nodes. |
| **1-dlistint_len.c** | `size_t dlistint_len(const dlistint_t *h);` | Returns the number of elements in a `dlistint_t` list. |
| **2-add_dnodeint.c** | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);` | Adds a new node at the **beginning** of a `dlistint_t` list. |
| **3-add_dnodeint_end.c** | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);` | Adds a new node at the **end** of a `dlistint_t` list. |
| **4-free_dlistint.c** | `void free_dlistint(dlistint_t *head);` | Frees (deallocates) all nodes in a `dlistint_t` list. |
| **5-get_dnodeint.c** | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);` | Returns the node at a specific index in a `dlistint_t` list. |
| **6-sum_dlistint.c** | `int sum_dlistint(dlistint_t *head);` | Returns the sum of all node data (`n`) in a `dlistint_t` list. |
| **7-insert_dnodeint.c** | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);` | Inserts a new node at a specific index in a `dlistint_t` list. |
| **8-delete_dnodeint.c** | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);` | Deletes a node at a given index in a `dlistint_t` list. |
| **lists.h** | — | Header file containing the structure definition and function prototypes. |

---

## 🧱 **Data Structure**

```c
/**
 * struct dlistint_s - doubly linked list node
 * @n: integer stored in the node
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
