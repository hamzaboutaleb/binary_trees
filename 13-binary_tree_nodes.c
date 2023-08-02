#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (l + r + 1);

	return (l + r);
}
