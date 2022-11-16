#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * binary_tree_node - a function that deletes an entire binary tree
 *@parent: is the pointer to the root node
 * @value: this is the value a tree holds
 * Return: if an error occures - NULL.
 */


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	/*Delete right sub-tree */
	binary_tree_delete(tree->right);
	/* delete root node */
	printf("Deleteing Node : %d\n", tree->n);
}
