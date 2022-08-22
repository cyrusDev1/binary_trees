#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Tree;

	Tree = malloc(sizeof(binary_tree_t));
	if (Tree == NULL)
	{
		free(Tree);
		return (NULL);
	}

	Tree->parent = parent;
	Tree->n = value;
	Tree->left = NULL;
	Tree->right = NULL;

	return (Tree);
}

