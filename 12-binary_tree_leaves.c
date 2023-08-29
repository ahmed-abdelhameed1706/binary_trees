#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count the tree leaves
 * @tree: root of the tree
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leaves++;

	if (tree->right)
		leaves++;

	if (!tree->left && !tree->right)
		leaves++;

	return (leaves);
}
