#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: leaves size
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		return (l + r + 1);

	return (l + r);
}
