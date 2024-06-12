#include "binary_tree.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, NULL if node is NULL or has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	binary_tree_t *parent = node->parent;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (node == parent->left)
	{
		return (parent->right);
	}
	else
	{
		return (parent->left);
	}
	return (NULL);
}
