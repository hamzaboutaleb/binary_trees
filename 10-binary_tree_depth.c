#include "binary_trees.h"

/**
 * binary_tree_depth_rec - measures the depth of a node in a binary tree
 * @tree: tree node
 * Return: depth
*/
size_t binary_tree_depth_rec(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: tree node
 * Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) - 1);
}
