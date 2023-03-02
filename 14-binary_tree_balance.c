#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL, otherwise height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (tree)
	{
		if (!tree->left || !tree->right)
			return (0);

		if (left > right)
			return (left + 1);
		else
			return (right + 1);
	}
	return (0);
}


/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL, otherwise the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
