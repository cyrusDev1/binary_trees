#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return:a pointer to the uncle node or NULL
 */

binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	size_t first_parent_depht, second_parent_depht;

	if (first == NULL || second == NULL)
		return (NULL);

	first_parent_depht = binary_tree_depth(first->parent);
	second_parent_depht = binary_tree_depth(second->parent);

	while (first_parent_depht > second_parent_depht)
	{
		first = first->parent;
		first_parent_depht -= 1;
	}
	while (second_parent_depht > first_parent_depht)
	{
		second = second->parent;
		second_parent_depht -= 1;
	}

	while (first != NULL && second != NULL)
	{
		if (first == second)
			return ((binary_tree_t *) first);
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *) second);
}

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
