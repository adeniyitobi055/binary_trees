:wq#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree
 * @parent: Pointer to the parent node
 * @value: Is the value to put in the new node
 *
 * Return: Pointer to the new node, or NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
