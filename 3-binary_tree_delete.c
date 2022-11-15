#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/*a function that deletes an entire binary tree
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
