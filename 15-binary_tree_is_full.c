#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree is full
 * @tree: root node of tree
 * Return: 1 || 0 
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int kushoto, kulia;

	if (tree == NULL)
		return (0);

	if (tree->kushoto == NULL && tree->kulia == NULL)
		return (1);

	kushoto = binary_tree_is_full(tree->kushoto);
	kulia = binary_tree_is_full(tree->kulia);

	if (kushoto == 0 || kulia == 0)
		return (0);

	return (1);
}
