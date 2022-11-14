#include "binanry_tre.h"
#include <stdlib.h>

//a function that creates a tree node
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	binary_tree_t *new;
	new = malloc(sizeof(binary_tree_t));
	//parent is a pointer to the parent node of the node to create
	
	if (new == NULL)
		return NULL;

	new->left = NULL;
	new->right = NULL;
	new->n = value;

	new->parent = parent;

	return (new);
}
