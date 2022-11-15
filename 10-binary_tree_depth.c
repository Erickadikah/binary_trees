#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_depth - l_Depth
 * @tree: pointer to the tree
 * Return: l_Depth
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t l_Depth = 0;

	l_Depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (l_Depth);
}
