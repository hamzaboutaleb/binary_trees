#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height_rec - measures the height of a binary tree
 * @tree: pointer to tree node
 * Return: max height
*/
int binary_tree_height_rec(const binary_tree_t *tree)
{
	int left_height, right_height;
	
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height_rec(tree->left);
	right_height = binary_tree_height_rec(tree->right);

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

	l = tree->left ? binary_tree_height_rec(tree->left) : -1;
	r = tree->right ? binary_tree_height_rec(tree->right) : -1;

	return (l - r);
}
