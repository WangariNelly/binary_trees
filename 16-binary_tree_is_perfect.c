#include "binary_trees.h"

/**
 * is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer tp the node to check.
 *
 * Return: If node is a leaf - 1.
 *	Otherwise - 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Returns the depth of a given node in a binary tree.
 * @tree: pointer to the root node of the tree to measure the depth of.
 *
 * Return: The depth of node.
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) :  0);
}

/**
 * get_leaf - Returns a leaf of a binary tree.
 * @tree: A pointer to the root node of the tree to find a life in.
 *
 * Return: A pointer to the first encountered leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree.
 * @leaf_depth: The depth of one leaf in thte binary tree.
 * @level: Level of current node.
 *
 * Return: If the tree is perfect - 1.
 *	Otherwise - 0.
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
			is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL - 0
 *	Otherwise - 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
		return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
	return (0);
}
