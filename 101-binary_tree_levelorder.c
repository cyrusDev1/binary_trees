#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree
 * using level-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node. The value in the
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, level;

	if (tree == NULL)
		return;

	height = binary_tree_height(tree) + 1;
	for (level = 1; level <= height; level++)
		printCurrentLevel(tree, func, level);
}

/**
 * printCurrentLevel - goes through a binary tree using level-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node. The value in the
 * @level: level of tree
 */

void printCurrentLevel(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	printCurrentLevel(tree->left, func, level - 1);
	printCurrentLevel(tree->right, func, level - 1);

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
