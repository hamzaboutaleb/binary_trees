#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary tree
 * @tree: pointer to tree node
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
		return;

	left = tree->left;
	right = tree->right;

	free(tree);
	binary_tree_delete(left);
	binary_tree_delete(right);
}
