#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of nodes with atleast 1 child
 * @tree: root of tree
 *
 * Return: number of nodes with atleast 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
