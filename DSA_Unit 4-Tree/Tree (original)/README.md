# BST Construction from Given Elements

## Problem Statement

Write a C++ program to construct a Binary Search Tree (BST) using the elements **14, 15, 4, 9, 7, 18, 3, and 5** in the given order and display all three depth-first traversals.

## Objective

To construct a Binary Search Tree and implement Inorder, Preorder, and Postorder traversal techniques.

## Algorithm

1. Start.
2. Define a node structure containing data, a left pointer, and a right pointer.
3. Initialize the root of the BST as `NULL`.
4. Insert the elements `14, 15, 4, 9, 7, 18, 3, 5` into the BST in the given order.
5. Perform **Inorder Traversal**:
   - Traverse the left subtree.
   - Visit the root node.
   - Traverse the right subtree.
6. Perform **Preorder Traversal**:
   - Visit the root node.
   - Traverse the left subtree.
   - Traverse the right subtree.
7. Perform **Postorder Traversal**:
   - Traverse the left subtree.
   - Traverse the right subtree.
   - Visit the root node.
8. Display the results of all three traversals.
9. Stop.

## Time Complexity

- BST construction: `O(n²)` in the worst case.
- Inorder traversal: `O(n)`.
- Preorder traversal: `O(n)`.
- Postorder traversal: `O(n)`.

## Space Complexity

- BST storage: `O(n)`.
- Recursive traversal stack: `O(h)`, where `h` is the height of the BST.

## Technologies Used

- Programming Language: C++
- Data Structure: Binary Search Tree
- Traversal Techniques: Inorder, Preorder, and Postorder

## Author

Student Name: Ghawat Shivprasad Appasaheb

