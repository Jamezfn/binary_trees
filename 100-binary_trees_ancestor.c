#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the LCA node of the two given nodes, NULL otherwise
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *current;
	binary_tree_t *temp;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	current = (binary_tree_t *)first;
	while (current != NULL)
	{
		temp = (binary_tree_t *)second;
		while (temp != NULL)
		{
			if (current == temp)
			{
				return (current);
			}
			temp = temp->parent;
		}
		current = current->parent;
	}
	return (NULL);
}
