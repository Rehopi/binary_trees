#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure, or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if(parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if(new_right_node == NULL)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = new_right_node;
		new_right_node->right = parent->right;
	}

	new_right_node->parent = parent;
	parent->right = new_right_node;

	return (new_right_node);
}

