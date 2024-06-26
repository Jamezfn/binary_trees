#include "binary_tree.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node, NULL if node is NULL,
 * parent is NULL, or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *parent = node->parent;

	if (node == parent->left)
	{
		return (parent->left);
	}
	else
	{
		return (parent->left);
	}
	return (NULL);
}
