#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_delete - deletes a binary tree
 *
 *@tree: node
 *@Return: void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL))
		return;
	binary_tree_t(tree->left);
	binary_tree_t(tree->right);
	free(tree);
}
