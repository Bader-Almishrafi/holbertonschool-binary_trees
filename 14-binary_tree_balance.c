#include "binary_trees.h"

/**
 * height - measures height of a binary tree
 * @tree: pointer to root node
 *
 * Return: height
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return ((left > right ? left : right) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((int)height(tree->left) - (int)height(tree->right));
}

