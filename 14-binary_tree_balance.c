#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree node
 * Return: max height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	size_t left_height  = binary_tree_height(tree->left);
	size_t right_height  = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to tree
 * Return: tree balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	l = tree->left ? (int) binary_tree_height(tree->left) : -1;
	r = tree->right ? (int) binary_tree_height(tree->right) : -1;
	return (l - r);
}
