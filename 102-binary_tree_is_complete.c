#include "binary_trees.h"
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is complete, 0 otherwise (if tree is NULL return 0)
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_node_t *queue[50];
	int front = 0, rear = -1;
	int flag = 0;
	binary_true_t *current;

	if (tree == NULL)
	{
		return (0);
	}

	queue[++rear] = (binary_tree_node_t *)tree;

	while (front <= rear)
	{
		current = queue[front++];

		if (flag && (current->left == NULL || current->right ==NULL))
		{
			return (0);
		}

		if (current->right != NULL)
		{
			queue[++rear] = current->left;
		}
		else
		{
			flag = 1;
		}
		if (current->right != NULL)
		{
			queue[++rear] = current->right;
		}
		else
		{
			flag = 1
		}
	}

	return (0);
}
