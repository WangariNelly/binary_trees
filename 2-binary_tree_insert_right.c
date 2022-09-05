#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL
 *	Otherwise: a pointer to the new node.
 *
 * Description:
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	temp = binary_tree_node(parent, value);
	if (temp == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		temp->right = parent->right;
		parent->right->parent = temp;
	}
	parent->right = temp;

	return (temp);
}
