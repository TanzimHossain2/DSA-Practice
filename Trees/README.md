# Trees

## What is a tree?

A tree data structure is a hierarchical structure that is used to represent and organize data in a way that is easy to navigate and search. It is a collection of nodes that are connected by edges and has a hierarchical relationship between the nodes.

## Terminologies used in trees

![Tree Terminologies](https://media.geeksforgeeks.org/wp-content/uploads/20221124153129/Treedatastructure.png)

1. **Root**: The topmost node of a tree or the node which does not have any parent node is called the root node. {A} is the root node of the tree. A non-empty tree must contain exactly one root node and exactly one path from the root to all other nodes of the tree.

2. **Parent**: The node which is connected to its child node. {B} is the parent node of {D, E}.

3. **Child**: Any node which is connected to a parent node. Node which has an edge pointing to it from some other node. Examples: {D, E} are the child nodes of {B}. {B, D, E} are the child nodes of {A}.

4. **Siblings**: Nodes with the same parent are called siblings. {D, E} are the siblings of each other. {B, C} are the siblings of each other.

5. **Leaf/External**: The node of the tree, which doesn't have any child node, is called a leaf node. A leaf node is the bottom-most node of the tree. There can be any number of leaf nodes present in a general tree. Leaf nodes can also be called external nodes. {K, L, M, N, O, P, G} are the leaf nodes of the tree.

6. **Internal**: The node of the tree, which has at least one child node, is called an internal node. Internal nodes are also called non-leaf nodes.

7. **Depth**: The depth of a node is the number of edges from the root to the node. {A} is at depth 0, {B, C} are at depth 1, {D, E, F} are at depth 2, {G, H, I, J} are at depth 3, {K, L, M, N, O, P} are at depth 4.

8. **Height**: The height of a node is the number of edges from the node to the deepest leaf. {K, L, M, N, O, P} are at height 0, {H, I, J} are at height 1, {D, E, F, G} are at height 2, {B, C} are at height 3, {A} is at height 4.

9. **Ancestor**:  An ancestor of a node is any predecessor node on a path from the root to that node. The root node doesn't have any ancestors. {A,B} are the ancestor nodes of the node {E}

10. **Descendant**: A descendant of a node n is any node for which n is an ancestor. {E,I} are the descendants of the node {B}.

11. **Degree**: The degree of a node is the number of children of the node. {A} has a degree of 2 as it has 2 children {B, C}. {B, C} have a degree of 4 as they have 4 children {D, E, F, G}.
12. **Subtree**: Any node of the tree along with its descendant.

Read more: [Tree (data structure)](https://en.wikipedia.org/wiki/Tree_(data_structure))

---
