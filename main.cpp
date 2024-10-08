#include "Node.h"

int main()
{
    Node* head = new Node(); //Create a head node
    int input;
    cout << "Please enter positive integers." << endl;
    cout << "Enter -1 to stop." << endl;
    cin >> input;
    while(input != -1) //Enter each input until -1 is read
    {
        Prepend(&head, input);
        cout << "Enter next number:" << endl;
        cin >> input;
    }
    cout << "Original List" << endl;
    Print(head); //Output the original list

    *head = selectionSort(head);
    cout << "SelectionSorted List" << endl; //Use Selection sort and print the list
    Print(head);
}