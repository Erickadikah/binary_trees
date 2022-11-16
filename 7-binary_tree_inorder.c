#include "binary_trees.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * binary_tree_inorder - This function that goes through a
 * binary tree using pre-order traversal
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer to a function call for each node
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	func(tree->n);

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
}
