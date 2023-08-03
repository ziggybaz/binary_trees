#include "binary_trees.h"

/**
* binary_tree_is_leaf - Checks whether node is a leaf
* @node: Node to be check
* Return: 1 or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
