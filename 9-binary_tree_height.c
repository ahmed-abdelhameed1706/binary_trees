#include "binary_trees.h"

/**
 * binary_tree_height - returns height of tree
 * @tree: pointer to the root
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);
		else
			left_height = 0;

		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);
		else
			left_height = 0;

		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}
	else
		return (0);
}
