#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return:a pointer to the sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	return (
		node == node->parent->left ? node->parent->right : node->parent->left);
}
