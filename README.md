# Singly Linked List in C

An implementation of singly linked list in c. 

This implementation has each node as a slinked_list struct



## Uses

To start, you want a first and current node struct and allocate some memory to the first node. Then set the current node as the first node. After, you can apply some of the methods below.

```c
// example
struct slinked_list *first, *current;

first = allocate();
current = first;
current->object_var = 4;
```



## Methods

* allocate - inits a node in memory and returns the address of that (also sets the next as NULL)
* push - appends node to the end. just supply the object and push will do the rest, returning the new current node
* get_next - gets the next node
* set_next - supply the next node and it will be appended to the current node
* remove_next - unlinks the next node
* print_list - will print the contents of the node starting from the node provided
* print - prints the contain of the current node



## License

MIT