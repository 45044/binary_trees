#include "binary_trees.h"
/**
 * *binary_tree_insert_right-this function inserts a node as the right-child
 * of another node.
 * @parent: a pointer to the node to insert the right child in.
 * @value: the value to store in the new node.
 * Return: a pointer to the created node or NULL if failure or if parent is
 * NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *pright = NULL, *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	pright = parent->right;
	parent->right = new_node;

	if (pright)
	{
		pright->parent = new_node;
		new_node->right = pright;
	}

	return (new_node);
}
