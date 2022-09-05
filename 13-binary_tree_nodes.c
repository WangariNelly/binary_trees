#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with
 *	atleast one child in a binary tree.
 * @tree: pointer to the root node of the tree
 *
 * Return: If tree is NULL - 0
 *	Otherwise - nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		/**
		 * TODO: DO SOMETHING.
		 */
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
