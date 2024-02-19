#include "binary_trees.h"
/**
 * binary_tree_insert_left- this function inserts a node as the left child
 * of another node.
 * @parent: a pointer to the node to insert the left-child in.
 * @value: value to store in the new node
 * Return: a pointer o the created node or NULL on failure
 * or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	else
		newNode->left = NULL;
	parent->left = newNode;
	return (newNode);
}
