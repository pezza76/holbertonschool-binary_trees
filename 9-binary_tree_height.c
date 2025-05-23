#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree. 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_height = 0;
	size_t right_height = 0;

	
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);	

	return ((left_height > right_height ? left_height : right_height) + 1);
}
