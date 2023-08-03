#include "binary_trees.h"

/**
* binary_tree_preorder - preoder traversal
* @tree: The root node
* @func: Function pointer
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Error handler*/
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	if (tree != NULL)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
