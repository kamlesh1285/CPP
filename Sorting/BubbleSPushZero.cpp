#include<iostream>
using namespace std;
// Bubble Sort 
int main() {
    int arr[] = {5, 0, 2, 0, 0, 3, 4, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++) { // no of passes
        for (int j = 0; j<n-i-1; j++) {
            if (arr[j] == 0) {
                swap(arr[j], arr[j+1]);
            }
        }
    

    }
    cout<<"Sorted array:";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}


