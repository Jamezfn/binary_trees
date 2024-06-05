#include "binary_trees.h"

/**
 * inary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return 0;
    }

    size_t left_height = binary_tree_balance(tree->left);
    size_t right_height = binary_tree_balance(tree->right);

    return (int)(left_height - right_height);
}