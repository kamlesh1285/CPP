// Polynomial Linked List 


#include <iostream>
using namespace std;

class Node {
public:
    int coeff;
    int pow;
    Node* next;

    Node(int c, int p) {
        coeff = c;
        pow = p;
        next = NULL;
    }
};

class Polynomial {
private:
    Node* head = NULL;

public:
    void insert(int c, int p) {
        Node* newNode = new Node(c, p);

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }
};






























