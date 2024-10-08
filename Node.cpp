#include "Node.h"

void Prepend(Node** head, int value)
{
    Node* node = new Node();
    node->data = value;
    node->next = *head;
    *head = node;
}

void Print(Node* head)
{
    while(head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node selectionSort(Node* head)
{
    Node *a = new Node();
    Node *b = new Node();
    Node *c = new Node();
    Node *d = new Node();
    Node *r = new Node();
    a = b = head;
    while(b->next)
    {
        c = d = b->next;
        while(d != nullptr)
        {
            if(b->data > d->data)
            {
                if(b->next == d)
                {
                    if(b == head)
                    {
                        b->next = d->next;
                        d->next == b;
                        r = b;
                        b = d;
                        d = r;
                        c = d;
                        head = b;
                        d = d->next;
                    }
                    else
                    {
                        b->next = d->next;
                        d->next = b;
                        a->next = d;
                        r = b;
                        b = d;
                        d = r;
                        c = d;
                        d = d->next;
                    }
                }
                else
                {
                    if(b == head)
                    {
                        r = b->next;
                        b->next = d->next;
                        d->next = r;
                        c->next = b;
                        r = b;
                        b = d;
                        d = r;
                        c = d;
                        d = d->next;
                    }
                    else
                    {
                        r = b->next;
                        b->next = d->next;
                        d->next = r;
                        c->next = b;
                        a->next = d;
                        r = b;
                        b = d;
                        d = r;
                        c = d;
                        d = d->next;
                    }
                }
            }
            else
            {
                c = d;
                d = d->next;
            }
            a = b;
            b = b->next;
        }
    }
    return *head;
}

