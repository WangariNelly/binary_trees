#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: If tree is NULL - 0.
 *	Otherwise: number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		/**
		 * TODO: DO SOMETHING HERE
		 */
		leaves += 1;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
