#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with atleast one child, 0 if tree is NULL
 *         a NULL pointer is not considered a node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree = NULL)
    {
        return 0;
    }

    size_t has_child = (tree->left != NULL || tree->right !=NULL);

    size_t left_nodes = binary_tree_nodes(tree->left);
    size_t right_nodes = binary_tree_nodes(tree->right);

    return has_child + left_nodes + right_nodes;
}