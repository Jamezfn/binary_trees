#include "binary_trees.h" 

/**
 * binary_tree_node - function to create a binary tree node
 * @parent: the pointer to the parent node
 * @value: value to insert to the binary tree
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->n = value;

    new_node->left = NULL;
    new_node->right = NULL;

    new_node->parent = parent;

    return new_node;    
}