#include "binary_trees.h"

/**
* binary_tree_insert_left - It inserts a node to the left
* @parent: The root node
* @value: The value of the node
* Return: A new_node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*Error-handling*/
	if (parent == NULL)
		return (NULL);

	/*memory allocation*/
	new_node = malloc(sizeof(binary_tree_t));

	/*Error handling*/
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	return (new_node);
}
