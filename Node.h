#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node* next;  
};
void Prepend(Node** head, int value);
void Print(Node* head);
Node selectionSort(Node* head);
