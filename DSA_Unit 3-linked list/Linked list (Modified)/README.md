# Hospital Data Management System Using Doubly Linked List

## 1. Project Overview

The Hospital Data Management System is a menu-driven C++ application developed using the Doubly Linked List data structure. It helps manage patient records efficiently by allowing users to add, display, search, and delete patient information.

Each patient record is stored in a node containing patient details and two pointers: one pointing to the previous node and another pointing to the next node. This allows traversal in both forward and backward directions.

## 2. Problem Statement

Managing patient records manually can be time-consuming and difficult, especially when records need to be updated, searched, or deleted.

This project aims to develop a Hospital Data Management System using a Doubly Linked List in C++ to organize patient information efficiently. The system supports dynamic memory allocation and provides basic operations for managing patient records.

## 3. Objectives

- To implement a Doubly Linked List using C++.
- To store and manage patient information dynamically.
- To perform insertion, deletion, searching, and traversal operations.
- To understand the use of dynamic memory allocation.
- To demonstrate forward and backward traversal.
- To apply Data Structures and Algorithms to a real-world hospital management problem.

## 4. Features

- Add new patient records.
- Display all patient records.
- Search for a patient using Patient ID.
- Delete patient records.
- Traverse records in forward and backward directions.
- Store patient details dynamically.
- Provide a menu-driven interface.

## 5. Patient Information

Each patient record contains the following fields:

- Patient ID
- Patient Name
- Age
- Disease

## 6. Data Structure Used

**Doubly Linked List**

A Doubly Linked List is a linear data structure in which each node contains data and two pointers.

- `prev`: Points to the previous node.
- `next`: Points to the next node.

### Node Structure

Each node stores patient information and links to adjacent nodes.

    [Previous | Patient Data | Next]

The first node has a `prev` pointer set to `NULL`, and the last node has a `next` pointer set to `NULL`.

## 7. Operations Performed

| Operation | Description |
|-----------|-------------|
| Insertion | Adds a new patient record. |
| Display | Displays all patient records. |
| Searching | Finds a patient using Patient ID. |
| Deletion | Removes a patient record. |
| Forward Traversal | Displays records from first to last. |
| Backward Traversal | Displays records from last to first. |

## 8. Technologies Used

- Programming Language: C++
- Data Structure: Doubly Linked List
- Memory Management: Dynamic Memory Allocation
- IDE: Visual Studio Code / Code::Blocks / Any C++ Compiler
- Version Control: Git and GitHub


## 9. How to Run the Project

### Step 1: Clone the Repository

    git clone <your-repository-url>

### Step 2: Open the Project Folder

Open the downloaded project folder in your preferred code editor.

### Step 3: Compile the Program

If you have the g++ compiler installed, run:

    g++ source_code/linkedlist.cpp -o hospital

### Step 4: Execute the Program

On Windows:

    hospital.exe

On Linux:

    ./hospital

## 10. Learning Outcomes

- Understanding the structure of a Doubly Linked List.
- Implementing linked list operations in C++.
- Using pointers and dynamic memory allocation.
- Managing patient records using nodes.
- Understanding forward and backward traversal.
- Applying DSA concepts to a practical application.

## 12. Advantages

- Dynamic memory allocation.
- Efficient insertion and deletion when the required node is known.
- Traversal in both directions.
- Flexible management of patient records.

## 13. Limitations

- Records are not permanently stored unless file handling is implemented.
- Searching by Patient ID requires sequential traversal in a basic linked list.
- The application does not provide a graphical user interface.
- The project is intended for educational purposes and is not a complete hospital information system.

## 14. Future Enhancements

- Add file handling for permanent record storage.
- Introduce patient admission and discharge management.
- Add patient priority and emergency status.
- Implement login authentication.
- Develop a graphical user interface.
- Add sorting and filtering options.

## 15. Conclusion

The Hospital Data Management System demonstrates the practical application of a Doubly Linked List in C++. It provides basic patient record management operations and helps students understand pointers, dynamic memory allocation, insertion, deletion, searching, and traversal.

This project illustrates how fundamental Data Structures and Algorithms can be applied to solve real-world data management problems.

## 16. Author

**Name:** Your Name  
**Department:** Electrical and Electronics Engineering (EEE)  
**Project:** Data Structures and Algorithms (DSA)  
**Language:** C++

---

**Note:** This project is developed for academic and educational purposes.
