#include<iostream>
using namespace std;
// Bubble Sort 
int main() {
    int arr[] = {5, 1, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++) { // no of passes
        for (int j = 0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
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

// Time Complexity: O(n^2) in worst, 
                //  O(n) in best, 
                //  O(n^2) in Avg.
// Space Complexity: O(n) in worst, 
                   // O(1) in best,
                    //O(n) in Avg.
// Stable: Yes
// No of Operations: n(n-1)/2 in worst,
                    // n-1 in best,
                    // n(n-1)/2 in Avg,

// Q. How much Max and min swaps are needed to sort array of length 6.
// Ans. Max swaps = 15 (Reverse - Worst case), Min Swaps = 0 (Already sorted - Best case)

// Q. 
 
