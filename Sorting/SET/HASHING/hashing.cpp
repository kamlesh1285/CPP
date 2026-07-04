//           UNIT -4 
//          HASHING
// Hashing in C++ is mainly used to map data (keys) to values efficiently using a hash function. It gives average O(1) time complexity for insert, delete, and search operations.
// The most commonly used hashing data structure in C++ is the unordered_map and unordered_set, which are part of the C++ Standard Library. They use a hash function to compute an index into an array of buckets, where the desired value can be found.

//         
#include <iostream>
using namespace std;

class HashTable {
    static const int table_size = 10;
    int hash_table[table_size];

public:
    HashTable() {
        initialize();
    }

    int hash_function(int key) {
        return key % table_size;
    }

    void initialize() {
        for (int i = 0; i < table_size; i++) {
            hash_table[i] = -1; // empty slot
        }
    }

    void insert(int key) {
        int index = hash_function(key);

        while (hash_table[index] != -1) {
            index = (index + 1) % table_size; // Linear probing
        }

        hash_table[index] = key;
    }

    void display() {
        for (int i = 0; i < table_size; i++) {
            cout << "Index " << i << ": " << hash_table[i] << endl;
        }
    }
};

int main() {
    HashTable ht;

    ht.insert(95);
    ht.insert(25);
    ht.insert(35);

    ht.display();

    return 0;
}