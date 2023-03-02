#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: NULL if tree is 0, Otherwise number of nodes with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (((tree->left || tree->right) ? 1 : 0) +
			binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
