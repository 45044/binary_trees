#include "binary_trees.h"
/**
 * binary_tree_node-this function will create a binary tree with no kids
 * @parent: a pointer ti the parent nodeof the node o create
 * @value: value to put to the new node.
 * Return: New node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);

}
