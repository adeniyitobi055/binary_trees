#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftsize, rightsize;

	if (tree)
	{
		leftsize = binary_tree_size(tree->left);
		rightsize = binary_tree_size(tree->right);

		return (leftsize + rightsize + 1);
	}
	return (0);
}
