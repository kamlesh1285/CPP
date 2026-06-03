                                            // LINKLIST IN CPP 
// def--A Linked List is a linear data structure where elements are stored in nodes.
// Each node contains:
        //--Data
        //--Address of next node (pointer)

// Unlike arrays, elements are not stored in contiguous memory locations.

// struct Node {
   // int data;
    //Node* next;
//};

// Types of Linked List:
      //--Singly Linked List
      //--Doubly Linked List
      //--Circular Linked List


// Advantages:
        //--Dynamic size
        //--Easy insertion and deletion
        //--No memory wastage
// Disadvantages:
        //--Extra memory for pointer
        //--No direct access like array
        //--Traversal is slower
//  Time Complexity
        //--Insertion at beginning → O(1)
        //--Deletion at beginning → O(1)
        //--Traversal → O(n)
//  Real-Life Uses:
        //--Music playlist
        //--Browser history
        //--Undo/redo operations
        //--Dynamic memory management




        // Example: Lec1
#include <iostream>
using namespace std;

class CSE15 
{
    int age;
    public:
    void show(int n)
    {
        age=n;
        cout<<age;
    }
};

int main() {
	// your code goes here
	CSE15 student;
	int n=25;
	student.show(n);

}




        // Lec:2
#include <iostream> 
using namespace std;

class abes {
    public:
    int id;
    abes(int n)
    {
        id=n;
        cout<<id;
    }
};

int main () {
    abes student(100);
}




      // Lec:3
#include <iostream> 
using namespace std;

class node {
    public:
    int data;
    node*next;
    node(int value) 
    {
        data=value;
        next=NULL;
    
    }
};

class linkedlist
{
    public:
    node*head;
    node*tail;
    linkedlist() 
    {
        head=tail=NULL;
    }
    void pushfront(int value) {
        node* ptr=new node(value);
        if(head==NULL) {
            head=tail=ptr;
        }
        else {
            ptr->next=head;
            head=ptr;
        }
    }
    void display() {
        node*temp=head;
        if(head==NULL) {
            cout<<"linkedlist is empty"<<endl;
            return;
        }
        while(temp!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main() {
    linkedlist LL;
    LL.pushfront(10);
    LL.pushfront(20);
    LL.pushfront(30);
    LL.display();
}
















#include <iostream>
using namespace std;

int main() {
    int x=10;
    int* ptr=&x;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr;

}



/// CodeHelp

#include <iostream> 
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value) {
        this-> data = value;
        this-> next = NULL;
    }
};
int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    cout<<first->data<<endl;
    cout<<first->next<<endl;

    return 0;

}




// Insertion and Printing of Linked List
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this-> data = data;
        this-> next = NULL;

    }
};
void insertAtHead(Node* &head, int value) {
    //create new node 
    Node* temp = new Node(value);
    temp-> next = head;
    head = temp;

}
void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    
    insertAtHead(head, 12);
    print(head);
    
    insertAtHead(head, 15);
    print(head);

    return 0;

}

//output: 10
//        12 10
//.       15 12 10 



// Insert at end.


#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
         this-> data = data;
         this-> next = NULL;
    }

};

void insertAtend(Node* &head, int value) {
    
    Node* newNode = new Node(value);
    Node* tail = head;
    if(head == NULL){
        head = tail= newNode;
    }
    while (tail->next!=NULL) {
        tail=tail->next;
    }
    tail->next=newNode;
}
void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    
    insertAtend(head, 12);
    print(head);
    
    insertAtend(head, 15);
    print(head);

    return 0;

}

// Output: 10 
        // 10 12 
        // 10 12 15 





// 21/04/2026


void insert_at_position(Node* &head, int value, int pos) {
    Node* newNode = new Node(value);
    if (pos <= 0) {
        cout<<"Invalid position"<<endl;
        return;
    }

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;

    }
    Node* temp = head;
    for (int i = 1; i <pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout<<"Position out of bounds"<<endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;

}



// 



//22/04/2026.  Doubly Linked List 

// double linked list is a type of linked list where each node contains a pointer to the next node and a pointer to the previous node. This allows for bidirectional traversal of the list.

#include <iostream>
using namespace std;    
void insertAtHead(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}    
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode-> prev = temp;
}
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout<<temp->data<<" ";      
        temp = temp->next;
}
    cout<<endl;
}
int main() {
    Node* head = NULL;
    insertAtHead(head, 10);             
    insertAtHead(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    print(head);
    return 0;
}  

// Output: 20 10 30 40








                   // Circular Linked List
// A circu lar linked list is a type of linked list where the last node points back to the first node, creating a circular structure. This allows for continuous traversal of the list without reaching a null

#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        newNode->next = head; // Point to itself to make it circular
        return;
    }
    Node* temp = head;
    while (temp->next != head) { // Traverse until we reach the last node
        temp = temp->next;
    }
    temp->next = newNode; // Point last node to new node
    newNode->next = head; // Point new node to head to maintain circular structure

}
void print(Node* &head) {
    if (head == NULL) {
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = head;
    do {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp != head); // Loop until we come back to head
    cout<<endl;
}
int main() {
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    print(head);
    return 0;
}
// Output: 10 20 30


// 23/04/2026. Insertion and Deletion in circular Linked List 
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int Value) {
        this->data = Value;
        this->next = NULL;
    }

};
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        newNode->next = head; // Point to itself to make it circular
        return;
    }
    Node* temp = head;
    while (temp->next != head) { // Traverse until we reach the last node
        temp = temp->next;
    }
    temp->next = newNode; // Point last node to new node
    newNode->next = head; // Point new node to head to maintain circular structure

}
void deleteAtEnd(Node* &head) {
    if (head == NULL) {
        cout<<"List is empty"<<endl;
        return;
    }
    if (head->next == head) { // Only one node in the list
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != head) { // Traverse until we reach the second last node
        temp = temp->next;
    }
    Node* lastNode = temp->next; // Last node to be deleted
    temp->next = head; // Point second last node to head
    delete lastNode; // Delete last node
}
void print(Node* &head) {
    if (head == NULL) {
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = head;
    do {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp != head); // Loop until we come back to head
    cout<<endl;
}
int main() {
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    print(head); // output: 10, 20, 30 
    deleteAtEnd(head);
    print(head); // output: 10, 20
    deleteAtEnd(head);
    print(head); // output: 10 
    deleteAtEnd(head);
    print(head); // output: List is empty
    return 0;
}





// circular linklist-- Insert At end , Insert At Begning , display .
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};
class CircularLinkedList {
    public:
    Node* head;
    Node* tail;
    CircularLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAtBeginning(int value) {
        Node* ptr = new Node(value);
        if (head == NULL) {
            head = ptr;
            tail = ptr;
            ptr->next = head;
        } else {
            ptr->next = head;
            head = ptr;
            tail->next = head;
        }
    }

    void insertAtEnd(int value) {
        Node* ptr = new Node(value);
        if (head == NULL) {
            head = ptr;
            tail = ptr;
            ptr->next = head;
        } 
        else {
            tail->next = ptr;
            tail = ptr;
            tail->next = head;
        }
        }


        void display() {
            if (head == NULL) {
                cout<<"List is empty"<<endl;
                return;
            }
            Node* temp = head;
            do {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            while (temp != head);
            cout<<endl;

            }

    };

    int main() {
        CircularLinkedList LL;
        LL.insertAtBeginning(5);
        LL.insertAtBeginning(15);
        LL.insertAtBeginning(25);
        LL.display(); // Output: 25 15 5

    
        LL.insertAtEnd(10);
        LL.insertAtEnd(20);
        LL.insertAtEnd(30);
        LL.display(); // Output: 10 20 30   


    }

    


