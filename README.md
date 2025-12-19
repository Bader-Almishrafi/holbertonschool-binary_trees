C - Binary Trees
================

This project implements binary trees in C, covering fundamental operations such as node creation, insertion, deletion, traversal, and various tree properties calculations.

## Learning Objectives

By completing this project, you will:

- Understand binary tree data structures
- Implement basic binary tree operations
- Perform tree traversals (preorder, inorder, postorder)
- Calculate tree properties (height, depth, size, leaves, nodes)
- Work with dynamic memory allocation in C
- Write clean, documented C code

## Files

| File | Description |
|------|-------------|
| `binary_trees.h` | Header file containing struct definitions and function prototypes |
| `0-binary_tree_node.c` | Creates a binary tree node |
| `1-binary_tree_insert_left.c` | Inserts a node as the left child of another node |
| `2-binary_tree_insert_right.c` | Inserts a node as the right child of another node |
| `3-binary_tree_delete.c` | Deletes an entire binary tree |
| `4-binary_tree_is_leaf.c` | Checks if a node is a leaf |
| `5-binary_tree_is_root.c` | Checks if a node is a root |
| `6-binary_tree_preorder.c` | Performs preorder traversal |
| `7-binary_tree_inorder.c` | Performs inorder traversal |
| `8-binary_tree_postorder.c` | Performs postorder traversal |
| `9-binary_tree_height.c` | Measures the height of a binary tree |
| `10-binary_tree_depth.c` | Measures the depth of a node in a binary tree |
| `11-binary_tree_size.c` | Measures the size of a binary tree |
| `12-binary_tree_leaves.c` | Counts the leaves in a binary tree |
| `13-binary_tree_nodes.c` | Counts the nodes with at least one child in a binary tree |

## Data Structures

```c
/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
```

## Compilation

All files can be compiled with:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o binary_trees
```

## Usage

Include the header file in your C programs:

```c
#include "binary_trees.h"
```

Example usage:

```c
binary_tree_t *root = binary_tree_node(NULL, 10);
binary_tree_insert_left(root, 5);
binary_tree_insert_right(root, 15);

printf("Tree size: %lu\n", binary_tree_size(root));
binary_tree_delete(root);
```

## Requirements

- Ubuntu 20.04 LTS
- gcc compiler
- Make sure to handle memory allocation failures

## Author

[Your Name]

## License

This project is part of the Holberton School curriculum.