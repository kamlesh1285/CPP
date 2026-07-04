#include<iostream>
using namespace std; 
// Selection Sort 
void selectionsort(int arr[], int n) {
    for (int i=0; i<n; i++) {
        int minIndex = i;

        for (int j=i+1; j<n; j++) { // Finding the smallest element in remaining
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // swap the found minimum element with first element
        swap(arr[i], arr[minIndex]);

    }
}

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {67, 78, 45, 34, 39, 63};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Original array";
    printArray(arr, n);
    selectionsort(arr, n);

    cout<<"\nSorted Array";
    printArray(arr, n);

    return 0;

}


// Time complexity :// O(n^2)-- Best 
                    // O(n^2) -- Avg
                    // O(n^2) -- Worst
// space Complexity: // O(1) -- In- place sorting 


