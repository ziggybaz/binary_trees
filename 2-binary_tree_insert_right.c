#include "binary_trees.h"

/**
* binary_tree_insert_right - It inserts a node to the right
* @parent:The root node
* @value: The value of the node
* Return: The address of the new_node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*Error handling*/
	if (parent == NULL)
		return (NULL);

	/*Memory allocation*/
	new_node = malloc(sizeof(binary_tree_t));

	/*Error check*/
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = new_node;
	}
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
