#include "binary_trees.h"

/**
 * binary_tree_preorder - function to preorder traverse
 * @tree: root node
 * @func: function to be passed
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	
	func(tree->n);
	binary_tree_preorder(tree->left);
	binary_tree_preorder(tree->right);
}
