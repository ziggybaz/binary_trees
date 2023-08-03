#include "binary_trees.h"

/**
* binary_tree_size - size of tree
* @tree: The root node
* Return: The size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right, left;

	/*Error handler*/
	if (tree == NULL)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	left = binary_tree_size(tree->left);
	left++;
	right = binary_tree_size(tree->right);
	right++;

	return (right + left - 1);
}
