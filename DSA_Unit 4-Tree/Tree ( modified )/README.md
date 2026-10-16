# BST Construction from Given Elements — Modified Version

## Problem Statement

Write a C++ program to construct a Binary Search Tree (BST) using the elements **14, 15, 4, 9, 7, 18, 3, and 5** in the given order.

### Suggested Modifications

1. **Display the tree after each insertion:** Show the current structure of the BST after inserting every element.
2. **Calculate height and leaf count:** Calculate and display the height of the final BST and the total number of leaf nodes.
3. **Search for an element:** Allow the user to enter a value and search for it in the BST. Display whether the element is found or not.
4. **Delete an element:** Allow the user to enter a value to delete from the BST while preserving the BST properties.
5. **Display updated tree:** Display the BST after the deletion operation.

## Objectives

- Construct a BST using the given elements.
- Display the tree after each insertion.
- Perform Inorder, Preorder, and Postorder traversals.
- Calculate the height and number of leaf nodes.
- Implement searching and deletion operations.

## Algorithm

1. Start.
2. Define a node structure containing data, a left pointer, and a right pointer.
3. Initialize the root as `NULL`.
4. Insert the given elements into the BST in the specified order.
5. Display the BST after each insertion.
6. Perform Inorder, Preorder, and Postorder traversals.
7. Calculate and display the height of the BST.
8. Count and display the leaf nodes.
9. Accept a value from the user and search for it in the BST.
10. Accept a value to delete and perform deletion according to the node's case:
    - Leaf node.
    - Node with one child.
    - Node with two children.
11. Display the updated BST.
12. Stop.

## Time Complexity

- BST construction: `O(n²)` in the worst case.
- Display after every insertion: `O(n²)` total.
- Inorder, Preorder, and Postorder traversals: `O(n)` each.
- Height calculation and leaf counting: `O(n)` each.
- Searching and deletion: `O(h)` each, where `h` is the height of the BST; worst case `O(n)`.

