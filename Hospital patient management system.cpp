#include <iostream>
#include <string>
using namespace std;

// Node structure
struct Patient
{
    int patientID;
    string name;
    int age;
    string disease;
    Patient* next;
};

// Head pointer
Patient* head = nullptr;

// Add a new patient
void addPatient()
{
    Patient* newPatient = new Patient();

    cout << "\nEnter Patient ID: ";
    cin >> newPatient->patientID;

    cin.ignore();

    cout << "Enter Patient Name: ";
    getline(cin, newPatient->name);

    cout << "Enter Age: ";
    cin >> newPatient->age;

    cin.ignore();

    cout << "Enter Disease: ";
    getline(cin, newPatient->disease);

    newPatient->next = nullptr;

    // If linked list is empty
    if (head == nullptr)
    {
        head = newPatient;
    }
    else
    {
        Patient* temp = head;

        // Move to the last node
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newPatient;
    }

    cout << "\nPatient added successfully!\n";
}

// Display all patients
void displayPatients()
{
    if (head == nullptr)
    {
        cout << "\nNo patient records available.\n";
        return;
    }

    Patient* temp = head;

    cout << "\n========== PATIENT RECORDS ==========\n";

    while (temp != nullptr)
    {
        cout << "\nPatient ID : " << temp->patientID;
        cout << "\nName       : " << temp->name;
        cout << "\nAge        : " << temp->age;
        cout << "\nDisease    : " << temp->disease;
        cout << "\n-------------------------------------\n";

        temp = temp->next;
    }
}

// Search patient by ID
void searchPatient()
{
    if (head == nullptr)
    {
        cout << "\nNo patient records available.\n";
        return;
    }

    int id;
    cout << "\nEnter Patient ID to search: ";
    cin >> id;

    Patient* temp = head;

    while (temp != nullptr)
    {
        if (temp->patientID == id)
        {
            cout << "\nPatient Found!\n";
            cout << "Patient ID : " << temp->patientID << endl;
            cout << "Name       : " << temp->name << endl;
            cout << "Age        : " << temp->age << endl;
            cout << "Disease    : " << temp->disease << endl;

            return;
        }

        temp = temp->next;
    }

    cout << "\nPatient with ID " << id << " not found.\n";
}

// Delete patient by ID
void deletePatient()
{
    if (head == nullptr)
    {
        cout << "\nNo patient records available.\n";
        return;
    }

    int id;
    cout << "\nEnter Patient ID to delete: ";
    cin >> id;

    Patient* temp = head;
    Patient* previous = nullptr;

    // Search for the patient
    while (temp != nullptr && temp->patientID != id)
    {
        previous = temp;
        temp = temp->next;
    }

    // Patient not found
    if (temp == nullptr)
    {
        cout << "\nPatient with ID " << id << " not found.\n";
        return;
    }

    // If first node is deleted
    if (previous == nullptr)
    {
        head = temp->next;
    }
    else
    {
        previous->next = temp->next;
    }

    delete temp;

    cout << "\nPatient record deleted successfully!\n";
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n\n====================================";
        cout << "\n  HOSPITAL PATIENT MANAGEMENT SYSTEM";
        cout << "\n====================================";
        cout << "\n1. Add New Patient";
        cout << "\n2. Display All Patients";
        cout << "\n3. Search Patient";
        cout << "\n4. Delete Patient";
        cout << "\n5. Exit";
        cout << "\n====================================";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                deletePatient();
                break;

            case 5:
                cout << "\nProgram ended.\n";
                break;

            default:
                cout << "\nInvalid choice! Please enter 1 to 5.\n";
        }

    } while (choice != 5);

    return 0;
}