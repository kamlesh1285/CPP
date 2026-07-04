                             // Insertion Sort in C++ 

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}


//output: Sorted array: 1 2 3 4 5 


// Insertion Sort is a simple sorting algorithm that works like sorting playing cards in your hand.

//👉 It takes one element at a time and places it in the correct position in the already sorted part of the array.

// Step-by-Step Example:
// consider the array: [5, 3, 4, 1, 2] , Pass 1 Take 3 and compare with 5 [3 5 4 1 2] , Pass 2 Take 4 and compare with 5 → shift 5 [3 4 5 1 2], Pass 3 Take 1 Shift 5, 4, 3 [1, 3, 4, 5, 2], Pass 4 Take 2 Shift 5, 4, 3 [1, 2, 3, 4, 5] 
// Time Complexity: $ O(n^2) Best {when array is already sorted}
                 // $ O(n^2) Average {When array is in random order}
                 // $ O(n) Worst {When array is sorted in reverse order}

// Space Complexity: $ O(1) {In-place sorting algorithm}



