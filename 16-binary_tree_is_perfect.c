#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: return 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_height, left_height, right_height;

	tree_height = binary_tree_height(tree);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (
		((tree_height - 1) == left_height) && ((tree_height - 1) == right_height));
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the height.
 * Return: return the height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height =  tree->left != NULL ? binary_tree_height(tree->left) + 1 : 0;
	right_height = tree->right != NULL ? binary_tree_height(tree->right) + 1 : 0;
	if (left_height >= right_height)
		return (left_height);
	return (right_height);
}
