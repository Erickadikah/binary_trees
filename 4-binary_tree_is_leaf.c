#include "binary_trees.h"
#include <stddef.h>
/* This function that checks if a node is a leaf
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return 0;

	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	else
		return (0);
}
