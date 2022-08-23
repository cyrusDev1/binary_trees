#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return:a pointer to the uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	return (binary_tree_sibling(node->parent));
}

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
