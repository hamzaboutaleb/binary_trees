#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to tree node
 * Return: max height
*/
size_t tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height, max;

	if (tree == NULL)
		return (0);

	l_height = tree_height(tree->left);
	r_height = tree_height(tree->right);

	max = r_height;
	if (l_height > r_height)
		max = l_height;
	return (max + 1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);

	left = tree->left;
	right = tree->right;

	if (right == NULL && left == NULL)
		return (1);

	if (left && right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 is its perfetch 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full, is_same_height;

	if (tree == NULL)
		return (0);

	is_full = binary_tree_is_full(tree);
	is_same_height = tree_height(tree->right) == tree_height(tree->left);
	if (is_full && is_same_height)
		return (1);
	return (0);
}
