#include "binary_trees.h"

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

/**
 * binary_tree_balance - that measures the balance factor of
 * a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 * the balance factor
 * Return: return the balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = tree->left != NULL ? (int)binary_tree_height(tree->left) : -1;
	right_h = tree->right != NULL ? (int)binary_tree_height(tree->right) : -1;
	return (left_h - right_h);
}
