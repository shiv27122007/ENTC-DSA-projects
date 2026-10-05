#include <iostream>
#include <string>
using namespace std;

// Node structure
struct Node
{
    string regNo;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(string regNo)
{
    Node* newNode = new Node();

    newNode->regNo = regNo;
    newNode->left = nullptr;
    newNode->right = nullptr;

    return newNode;
}

// Insert registration number into BST
Node* insert(Node* root, string regNo)
{
    if (root == nullptr)
    {
        return createNode(regNo);
    }

    if (regNo < root->regNo)
    {
        root->left = insert(root->left, regNo);
    }
    else if (regNo > root->regNo)
    {
        root->right = insert(root->right, regNo);
    }
    else
    {
        cout << "Registration number already exists!\n";
    }

    return root;
}

// Search registration number
bool search(Node* root, string regNo)
{
    if (root == nullptr)
    {
        return false;
    }

    if (root->regNo == regNo)
    {
        return true;
    }

    if (regNo < root->regNo)
    {
        return search(root->left, regNo);
    }
    else
    {
        return search(root->right, regNo);
    }
}

// Inorder traversal to display sorted registration numbers
void displaySorted(Node* root)
{
    if (root == nullptr)
    {
        return;
    }

    displaySorted(root->left);
    cout << root->regNo << endl;
    displaySorted(root->right);
}

// Main function
int main()
{
    Node* root = nullptr;
    int choice;
    string regNo;

    do
    {
        cout << "\n====================================";
        cout << "\n VEHICLE REGISTRATION SYSTEM";
        cout << "\n====================================";
        cout << "\n1. Insert Registration Number";
        cout << "\n2. Search Registration Number";
        cout << "\n3. Display Sorted Registration Numbers";
        cout << "\n4. Exit";
        cout << "\n====================================";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter vehicle registration number: ";
                cin >> regNo;

                root = insert(root, regNo);

                cout << "Registration number inserted successfully!\n";
                break;

            case 2:
                cout << "Enter registration number to search: ";
                cin >> regNo;

                if (search(root, regNo))
                {
                    cout << "Registration number found!\n";
                }
                else
                {
                    cout << "Registration number not found!\n";
                }
                break;

            case 3:
                if (root == nullptr)
                {
                    cout << "No registration numbers available.\n";
                }
                else
                {
                    cout << "\nRegistration Numbers in Sorted Order:\n";
                    displaySorted(root);
                }
                break;

            case 4:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}