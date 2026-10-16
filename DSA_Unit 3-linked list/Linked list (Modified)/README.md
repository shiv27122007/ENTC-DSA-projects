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


```

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
```bash
hospital.exe
```

**Linux/macOS:**
```bash
./hospital
```

## 📚 Data Structures Comparison

| Feature | Doubly Linked List | Queue |
|---|---|---|
| Purpose | Manage patient records | Manage waiting patients |
| Principle | Bidirectional traversal | FIFO |
| Insertion | At suitable positions | At the rear |
| Deletion | From suitable positions | From the front |
| Searching | Sequential search | Sequential search |
| Traversal | Forward and backward | Front to rear |

## ✅ Advantages
- Organizes patient information systematically.
- Supports efficient insertion and deletion when the relevant node is available.
- Maintains a fair waiting order using FIFO.
- Demonstrates two important data structures in one project.
- Helps develop practical C++ programming and problem-solving skills.

## ⚠️ Limitations
- Patient records may be lost after program termination if permanent storage is not implemented.
- Searching generally requires linear traversal.
- A basic FIFO queue does not automatically prioritize emergency cases.
- The project is intended for educational purposes, not production hospital use.

## 🔮 Future Enhancements
- Add file handling or database integration.
- Implement a priority queue for emergency patients.
- Include doctor appointment scheduling.
- Add billing and prescription management.
- Introduce secure login and role-based access.

## 🎓 Learning Outcomes
- Understand Doubly Linked List operations.
- Understand and implement the FIFO principle.
- Develop skills in pointers and dynamic memory allocation.
- Learn to combine multiple data structures in one application.
- Apply DSA concepts to a practical problem.

## 👨‍💻 Author
**Student Mini-Project — Data Structures and Algorithms (DSA)**

## 📄 License
This project is intended for educational and academic purposes.
