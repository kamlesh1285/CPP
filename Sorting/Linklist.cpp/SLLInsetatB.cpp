// singly linked list insertion at beginning

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class SinglyLinkedList
{
private:
    Node* head;
    Node* tail;

public:
    SinglyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtBeginning(int value)
    {
        Node* ptr = new Node(value);

        if (head == NULL)
        {
            head = tail = ptr;
        }
        else
        {
            ptr->next = head;
            head = ptr;
        }
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty." << endl;
            return;
        }

        Node* temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    SinglyLinkedList sll;

    sll.insertAtBeginning(10);
    sll.insertAtBeginning(20);
    sll.insertAtBeginning(30);

    cout << "Linked list after inserting at the beginning: ";
    sll.display();

    return 0;
}