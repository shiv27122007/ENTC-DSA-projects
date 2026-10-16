# Hospital Data Management System Using Doubly Linked List

## 📌 Project Overview
The Hospital Data Management System is a C++ mini-project that manages patient records using a **Doubly Linked List** data structure. It allows users to store, display, search, update, and delete patient information efficiently.

Each node contains patient details and pointers to both the previous and next nodes, allowing traversal in both forward and backward directions.

## 🎯 Objectives
- To manage hospital patient records efficiently.
- To implement a Doubly Linked List using C++.
- To perform insertion, deletion, searching, and display operations.
- To understand dynamic memory allocation and pointer manipulation.
- To maintain patient information in an organized manner.

## ✨ Features
- Add new patient records.
- Display all patient records.
- Search for a patient using their ID.
- Update patient information.
- Delete patient records.
- Traverse patient records in forward and backward directions.
- Menu-driven user interface.

## 🛠️ Technologies Used
- **Programming Language:** C++
- **Data Structure:** Doubly Linked List
- **Concepts:** Structures/Classes, Pointers, Dynamic Memory Allocation, Functions, and Loops
- **Platform:** Visual Studio Code / Code::Blocks / any compatible C++ compiler


## ⚙️ How It Works
1. The user selects an operation from the menu.
2. Patient details are entered when adding a new record.
3. Each patient is stored as a node in the doubly linked list.
4. The system performs the selected operation.
5. The updated patient records are displayed to the user.

### Node Structure
Each node may contain:
- Patient ID
- Patient Name
- Age
- Gender
- Disease or health issue
- Previous pointer
- Next pointer

## ▶️ How to Run the Project

1. Clone or download this repository.
2. Open the project folder in your preferred C++ IDE.
3. Compile the source code using a C++ compiler.

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

## 📚 Data Structure Operations

| Operation | Description |
|---|---|
| Insertion | Adds a new patient record |
| Deletion | Removes a patient record |
| Searching | Finds a patient by ID |
| Updating | Modifies patient details |
| Forward Traversal | Displays records from first to last |
| Backward Traversal | Displays records from last to first |

## ✅ Advantages
- Supports traversal in both directions.
- Allows dynamic addition and removal of records.
- Makes insertion and deletion efficient when the relevant node is available.
- Demonstrates practical use of linked lists in a hospital management scenario.

## ⚠️ Limitations
- Records may be lost when the program terminates if file storage is not implemented.
- Searching for a patient generally requires linear traversal.
- The project is intended for educational purposes and is not a production-ready hospital system.

## 🔮 Future Enhancements
- Add file handling or database integration for permanent storage.
- Implement patient appointment scheduling.
- Add doctor and department management.
- Introduce billing and prescription management.
- Add login authentication and role-based access.

## 🎓 Learning Outcomes
- Understand the working of a Doubly Linked List.
- Develop practical C++ programming skills.
- Learn dynamic memory management and pointer operations.
- Apply data structures to a real-world-inspired problem.

## 👨‍💻 Author
**Student Mini-Project — Data Structures and Algorithms (DSA)**

## 📄 License
This project is intended for educational and academic purposes.
