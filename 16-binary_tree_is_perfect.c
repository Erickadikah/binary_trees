#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaves
 * @tree: pointer to root node
 * Return: returns the number of leaves
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t l_leaf = 0, r_leaf = 0;

		if ((tree->left == NULL) && (tree->right == NULL))
			return (1);
		l_leaf = binary_tree_leaves(tree->left);
		r_leaf = binary_tree_leaves(tree->right);
		return (l_leaf + r_leaf);
	}
}


/**
 * binary_tree_height - computes the height of binary tree
 * @tree: pointer to the root node
 * Return: return height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

	if (tree->left)
	{
		l = 1 + binary_tree_height(tree->left);
	}
	else
		l = 0;

	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - computes if the binary tree is perfect
 * @tree: pointer to the root node
 * Return: returns 1 if the tree is perfect otherwise 0
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (tree == NULL)
		return (0);
	l = tree->left;
	r = tree->right;
	if (binary_tree_is_leaf(tree))
		return(1)
			if (binary_tree__height(1) == binaryy_tree_height(r))
			{
				if (binary_tree_is_perfect(1) && binary_tree_is_perfect(1))
					return (1)
			}
	return (0)
}
