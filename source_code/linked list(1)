#include <iostream>
#include <string>
using namespace std;

struct Patient
{
    int patientID;
    string name;
    int age;
    string disease;

    Patient* prev;
    Patient* next;
};

Patient* head = NULL;

// Add patient at end
void addPatient()
{
    Patient* newNode = new Patient;

    cout << "\nEnter Patient ID: ";
    cin >> newNode->patientID;

    cin.ignore();

    cout << "Enter Patient Name: ";
    getline(cin, newNode->name);

    cout << "Enter Age: ";
    cin >> newNode->age;

    cin.ignore();

    cout << "Enter Disease: ";
    getline(cin, newNode->disease);

    newNode->prev = NULL;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Patient* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    cout << "\nPatient added successfully!";
}

// Display all patients
void displayPatients()
{
    if (head == NULL)
    {
        cout << "\nNo patient records found!";
        return;
    }

    Patient* temp = head;

    cout << "\n========== PATIENT RECORDS ==========\n";

    while (temp != NULL)
    {
        cout << "\nPatient ID : " << temp->patientID;
        cout << "\nName       : " << temp->name;
        cout << "\nAge        : " << temp->age;
        cout << "\nDisease    : " << temp->disease;
        cout << "\n-------------------------------------";

        temp = temp->next;
    }
}

// Search patient
void searchPatient()
{
    int id;

    cout << "\nEnter Patient ID to search: ";
    cin >> id;

    Patient* temp = head;

    while (temp != NULL)
    {
        if (temp->patientID == id)
        {
            cout << "\nPatient Found!";
            cout << "\nPatient ID : " << temp->patientID;
            cout << "\nName       : " << temp->name;
            cout << "\nAge        : " << temp->age;
            cout << "\nDisease    : " << temp->disease;

            return;
        }

        temp = temp->next;
    }

    cout << "\nPatient not found!";
}

// Delete patient
void deletePatient()
{
    int id;

    cout << "\nEnter Patient ID to discharge: ";
    cin >> id;

    Patient* temp = head;

    // Search patient
    while (temp != NULL && temp->patientID != id)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "\nPatient not found!";
        return;
    }

    // If first node
    if (temp->prev == NULL)
    {
        head = temp->next;
    }
    else
    {
        temp->prev->next = temp->next;
    }

    // If not last node
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;

    cout << "\nPatient discharged successfully!";
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n\n====================================";
        cout << "\n HOSPITAL PATIENT MANAGEMENT SYSTEM";
        cout << "\n====================================";
        cout << "\n1. Add Patient";
        cout << "\n2. Display Patients";
        cout << "\n3. Search Patient";
        cout << "\n4. Discharge Patient";
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
                cout << "\nProgram ended.";
                break;

            default:
                cout << "\nInvalid choice!";
        }

    } while (choice != 5);

    return 0;
}
