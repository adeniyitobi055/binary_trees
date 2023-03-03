#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as the left child of another node
 * @parent: Pointer to the node to insert the left-child
 * @value: Is the value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure, or if parent if NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->left)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
