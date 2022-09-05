#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the node to measure depth.
 *
 * Return: If tree is NULL - 0
 *	Otherwise - Depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/**
	 * if (tree && tree->parent)
	 * {
	 *	return (1 + binary_tree_depth(tree->parent));
	 * }
	 * return (0);
	 */
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
