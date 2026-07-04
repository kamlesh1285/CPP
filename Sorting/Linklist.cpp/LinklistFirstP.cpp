// LL- Node class and linkedlist class with two Function 1. Insert a node at the beginning of the linked list 2. Display the linked list.
#include <iostream>
using namespace std;

class node 
{
    public:
    int data;
    node* next;
    
    node(int value) 
    {
        data=value;
        next=NULL;
    }
};

class linkedlist
{
    node* head;
    node* tail;
    public:
    linkedlist() 
    {
        head=tail=NULL;
    }
    
    void insert_at_begning(int value) 
    {
        node* ptr = new node(value);
        if (head==NULL) {
            head=tail=ptr;
        }
        else {
            ptr->next=head;
            head=ptr;
        }
        
    }
    void display() 
    {
        if (head==NULL) {
            cout<<"Linkedlist is empty";
            return;
        }
        node* temp=head;
        while (temp!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main() {
    linkedlist obj;
    obj.insert_at_begning(78);
    obj.insert_at_begning(90);
    obj.insert_at_begning(106);
    obj.display();
    
}

// output: 106->90->78->NULL