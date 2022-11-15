#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *binary_tree_node - is the binary tree
 *parent: is the pointer to the root node
 *value: this is the value a tree holds
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	/* parent is a pointer to the parent node of the node to create */
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;
	return (new);
}
