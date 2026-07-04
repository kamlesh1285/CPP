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

       void insert_at_end(int value) 
    {
        node* ptr = new node(value);
        if (head==NULL) {
            head=tail=ptr;
        }
        else {
            tail->next=ptr;
            tail=ptr;
        }
    }

    bool search(int value) 
    {
        node* temp = head;
        while (temp != NULL) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int searchPosition(int value)
    {
        node* temp = head;
        int position = 1;
        while(temp != NULL) {
            if(temp->data == value) {
                return position;
            }
            temp = temp->next;
            position++;

        }
        return -1;
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
    
    obj.insert_at_end(25);
    obj.insert_at_end(30);
    obj.insert_at_end(40);
    obj.display();
    
    
}

// output: 106->90->78->NULL
//         106->90->78->25->30->40->NULL




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

    
}
