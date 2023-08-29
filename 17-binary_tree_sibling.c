#include "binary_trees.h"

/**
 * binary_tree_sibling - function to get the sibling of a node
 * @node: node to get sibling of
 *
 * Return: pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node && node->parent->right)
		return (node->parent->right);
	else if (node->parent->right == node && node->parent->left)
		return (node->parent->left);
	else
		return (NULL);
}
