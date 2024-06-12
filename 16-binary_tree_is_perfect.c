#include "binary_tree.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);	
	return ((left_height > right_height ? left_height : right_height) + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise (if tree is NULL, return 0)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		return (0);
	}

	int left_perfect = binary_tree_is_perfect(tree->left);
	int right_perfect = binary_tree_is_perfect(tree->right);

	return (left_perfect && right_perfect);
}
