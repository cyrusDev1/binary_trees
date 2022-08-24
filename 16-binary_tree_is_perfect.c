#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: return 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	/** A perfect binary tree of height h has pow (2, h +1) – 1 == size. **/
	return (power(2, height + 1) - 1 == size);
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

/**
 * binary_tree_size - measures the size of a node in a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the size.
 * Return: return the size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * power - returns the value of x raised to the power of y
 * @x: the value to exponentiate
 * @y: the power to raise x to
 * Return: x to the power of y
 */

int power(int x, int y)
{
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	return (x * power(x, y - 1));
}
