#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree node
 * Return: max height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height, max;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		max = l_height;
	else
		max = r_height;

	return (max + 1);
}
