#include "binary_trees.h"

/**
 * binary_tree_uncle - function to get the uncle of a node
 * @node: node to get uncle of
 *
 * Return: pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grand_parent = node->parent->parent;

	if (grand_parent->left == node->parent && grand_parent->right)
		return (grand_parent->right);
	else if (grand_parent->right == node->parent && grand_parent->left)
		return (grand_parent->left);
	else
		return (NULL);
}
