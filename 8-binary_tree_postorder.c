#include "binary_trees.h"

/**
* binary_tree_postorder - post order traversal
* @tree: The root node
* @func: Function pointer
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Error handling*/
	if (tree == NULL || func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
