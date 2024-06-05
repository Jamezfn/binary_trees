#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves in the tree, 0 if tree is NULL
 *         A NULL pointer is not considered a leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    
    if (tree->left == NULL && tree->right)
    {
        return 1;
    }
    
    size_t left_leaves = binary_tree_leaves(tree->left);
    size_t right_leaves = binary_tree_leaves(tree->right);

    return left_leaves + right_leaves;    
}