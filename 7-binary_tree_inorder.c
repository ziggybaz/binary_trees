#include "binary_trees.h"

/**
* binary_tree_inorder - inorder traversal
* @tree: The root node
* @func: Function pointer
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Error handler*/
	if (tree == NULL || func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
