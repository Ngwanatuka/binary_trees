#include "binary_trees.h"
/**
* binary_tree_insert_left - insert a node to the left
* @parent: parent of the node
* @value: value of the node
* Return: Null on failure and the node on success
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	binary_tree_t *left_child = parent->left;

	parent->left = new_node;
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = left_child;
	new_node->right = NULL;

	if (left_child != NULL)
	{
		left_child->parent = new_node;
	}

	return (new_node);
}

