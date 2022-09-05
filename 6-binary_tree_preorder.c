#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through the binary tree using preorder traversal
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function call for each node.
 *
 * Return: Nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		/*
		 * TODO: SOMETHING
		 */
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
