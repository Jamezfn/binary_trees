#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * 	  The value in the node must be passed as a parameter to this function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_node_t *queue[50];
	int front = 0, rear = -1;
	binary_tree_t *current;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	queue[++rear] = (binary_tree_node_t*)tree;

	while (front <= rear)
	{
		current = queue[front++];
		func(current->n);
		if (current->left != NULL)
		{
			queue[++rear] = current->right;
		}
	}
}
