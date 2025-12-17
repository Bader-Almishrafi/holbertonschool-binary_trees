#include "binary_trees.h"

/**
 * leaf_depth - Finds depth of leftmost leaf
 * @tree: pointer to node
 *
 * Return: depth
 */
static int leaf_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * check_perfect - checks if tree is perfect
 * @tree: pointer to node
 * @depth: expected leaf depth
 * @level: current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
static int check_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (depth == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (check_perfect(tree->left, depth, level + 1) &&
		check_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (!tree)
		return (0);

	depth = leaf_depth(tree);
	return (check_perfect(tree, depth, 0));
}

