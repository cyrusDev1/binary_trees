#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the depth.
 * Return: return the depht of a binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depht = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depht++;
		tree = tree->parent;
	}
	return (depht);
}
