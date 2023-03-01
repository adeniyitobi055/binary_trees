#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);

		if (!(tree->left || tree->right))
			return (0);

		if (left > right)
		{
			return (left + 1);
		}
		else
		{
			return (right + 1);
		}
	}
	return (0);
}
