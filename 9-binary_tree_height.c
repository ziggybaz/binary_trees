#include "binary_trees.h"

/**
* binary_tree_height - Height of the binary tree
* @tree: Root node of tree
* Return: Height of tree
*
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	/*Error handler*/
	if (tree == NULL)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);
	height_left = binary_tree_height(tree->left);
	height_left++;
	height_right = binary_tree_height(tree->right);
	height_right++;

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
