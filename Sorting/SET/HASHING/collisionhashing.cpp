// Collision Hashing Program 1- using collision method--open hashing(separate chaining method) && Hash Funstion--(division method)

#include <iostream>
#include <list>
using namespace std;

const int table_size=10;
list <int> hashtable[table_size];
int hashfunction(int key) 
{
    return key % table_size;
    
}

void insert(int key)
{
    int index=hashfunction(key);
    hashtable[index].push_back(key);
}

void display () 
{
    for(int i=0; i<table_size; i++) {
        cout<< i <<"-->";
        for(int value: hashtable[i]) {
            cout<<value<<" ";
        }
        cout<<endl;
    }
}

int main() {
    
	insert(25);
    insert(35);
	insert(45);
	insert(21);
	insert(13);
	insert(41);
	insert(53);
	display();
	

}

// Output:
//0-->
//1-->21 41 
//2-->
//3-->13 53 
//4-->
//5-->25 35 45 
//6-->
//7-->
//8-->
//9-->

