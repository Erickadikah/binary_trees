#include "binary_trees.h"
/**
 * binary_tree_height - this function measures the height of a binary tree
 * @tree: pointer to the root node to measure height
 * Return: 0 if tree is NULL.
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t l_Height = 0, r_Height = 0;

	l_Height = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	r_Height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	if (l_Height >= r_Height)
		return (l_Height);
	else
		return (r_Height);
}
