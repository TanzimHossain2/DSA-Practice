# Binary Tree

## Definition

A binary tree is a special type of tree in which every node or vertex has either no child node or one child node or two child nodes. A binary tree is an important class of a tree data structure in which a node can have at most two children.

## Quick Revision of Tree

1. **Nodes**: Individual items in the tree.
2. **Edges**: Connections between nodes.
3. **Root**: The top node in a tree.
4. **Leaf Nodes**: Nodes with no children.
5. **Internal Nodes**: Nodes with at least one child.
6. **Height**: The longest path from the root to a leaf.
7. **Depth**: The path from the root to a specific node.
8. **Parent Node**: A node that has a child node.
9. **Child Node**: A node that has a parent node.
10. **Sibling Nodes**: Nodes with the same parent.
11. **Ancestor Nodes**: Nodes above a node in the tree.
12. **Descendant Nodes**: Nodes below a node in the tree.
13. **Degree of a Node**: The number of children a node has.

For more details, check out the main [README](../README.md).

## Types of Binary Trees

Trees are powerful for representing data with parent-child relationships. Let's explore different types of binary trees:

1. **Full Binary Tree**: Every node has either 0 or 2 children. 

    ![Full Binary Tree](https://d14b9ctw0m6fid.cloudfront.net/ugblog/wp-content/uploads/2020/09/Picture2-1.jpg)

2. **Perfect Binary Tree**: All leaf nodes are at the same level and all non-leaf nodes have two children.

    ![Perfect Binary Tree](https://static.studytonight.com/data-structures/images/introduction-to-binary-trees-4.png)

3. **Complete Binary Tree**: All levels are completely filled except possibly the last level and the last level must be as left as possible (all nodes must be as left as possible). 

    ![Complet Binary Tree](https://d14b9ctw0m6fid.cloudfront.net/ugblog/wp-content/uploads/2020/09/Picture3.jpg)
    ![Complete Binary Tree](https://d14b9ctw0m6fid.cloudfront.net/ugblog/wp-content/uploads/2020/09/Picture4.jpg)

4. **Degenerate or Pathological Tree**: Every internal Parent node has exactly one child.

    ![Degenerate Tree](https://d14b9ctw0m6fid.cloudfront.net/ugblog/wp-content/uploads/2020/09/Picture8.jpg)

5. **Balanced Binary Tree**: The balanced binary tree is a tree in which both the left and right trees differ by atmost 1.

    ![Balanced Binary Tree](https://media.geeksforgeeks.org/wp-content/uploads/tree.jpg)

6. **Skewed Binary Tree**: A tree where every node has only one child. There are two types of skewed binary tree: left-skewed and right-skewed.
    - **Left-skewed**: Every node has only left child.
    - **Right-skewed**: Every node has only right child.

    ![Skewed Binary Tree](https://scaler.com/topics/images/degenerate-binary-trees.webp)
