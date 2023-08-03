#include "binary_trees.h"

/**
* binary_tree_is_root - checks whether thh node is the root node
* @node: Node to be checked
* Return: 0 || 1
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
