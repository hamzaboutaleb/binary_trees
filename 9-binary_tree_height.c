#include "binary_trees.h"

/**
 * binary_tree_height_rec - measures the height of a binary tree
 * @tree: pointer to tree node
 * Return: max height
*/
size_t binary_tree_height_rec(const binary_tree_t *tree)
{
	size_t l_height, r_height, max;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height_rec(tree->left);
	r_height = binary_tree_height_rec(tree->right);

	max = r_height;
	if (l_height > r_height)
		max = l_height;
	return (max + 1);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree node
 * Return: max height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_rec(tree) - 1);
}
