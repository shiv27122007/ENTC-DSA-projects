# Hospital Data Management System Using Doubly Linked List and Queue

## 📌 Project Overview
The Hospital Data Management System is a C++ mini-project that uses **Doubly Linked List and Queue** data structures to manage hospital patient records and waiting lists.

The Doubly Linked List is used to store and manage patient information, while the Queue follows the FIFO (First In, First Out) principle to manage patients waiting for their turn.

This project demonstrates how data structures can be applied to a real-world hospital management scenario.

## 🎯 Objectives
- To manage patient records efficiently.
- To implement a Doubly Linked List for storing patient information.
- To implement a Queue for managing patient waiting lists.
- To perform insertion, deletion, searching, and display operations.
- To understand dynamic memory allocation, pointers, and the FIFO principle.

## ✨ Features
- Add new patient records.
- Display all registered patients.
- Search for a patient using their ID.
- Update patient information.
- Delete patient records.
- Add patients to the waiting queue.
- Serve the next patient in FIFO order.
- Display patients waiting for their turn.

## 🛠️ Technologies Used
- **Programming Language:** C++
- **Data Structures:** Doubly Linked List and Queue
- **Concepts:** Structures/Classes, Pointers, Dynamic Memory Allocation, Functions, and Loops
- **Platform:** Visual Studio Code / Code::Blocks / any compatible C++ compiler



## ⚙️ Working of the System

### 1. Doubly Linked List
The Doubly Linked List maintains patient records. Each node contains patient details and two pointers: one to the previous node and another to the next node.

Operations include:
- Insertion of patient records
- Deletion of patient records
- Searching for patients
- Updating patient information
- Forward and backward traversal

### 2. Queue
The Queue manages patients waiting for consultation. It follows the FIFO principle, ensuring that the patient who joins the queue first is served first.

Operations include:
- **Enqueue:** Adds a patient to the rear.
- **Dequeue:** Removes the patient at the front after service.
- **Front:** Displays the next patient to be served.
- **Display:** Shows all waiting patients.
- **IsEmpty:** Checks whether the queue is empty.

## ▶️ How to Run the Project

1. Clone or download the repository.
2. Open the project folder in a C++ IDE.
3. Compile the source code:

```bash
g++ source_code/main.cpp -o hospital
```

4. Run the program.

**Windows:**
```
