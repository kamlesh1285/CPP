                           // Counting Sort 
// Def: Counting Sort is a non-comparison based sorting algorithm that sorts integers by counting the occurrences of each unique element in the input array.
// It works best whwn:
                   // $ Elements are integers 
                   // $ Range of values is small
                   // Example: marks, ages, digits, etc.
// Idea of countiong sort: suppose arr[] = {4, 2, 2, 8, 3, 3, 1} , Instead of comparing number we-
                   // 1. Find the maximum element
                   // 2. Create a count array 
                   // 3. Store frequency of each number in count array
                   // 4. Rebuild sorted array using frequencies 
  
#include <iostream>
using namespace std;

void countingSort(int a[], int n) 
{
    int maxvalue=a[0];
    for(int i=1; i<n; i++) {
        maxvalue= max(a[i], maxvalue);
    }

    int count[maxvalue + 1] = {0};
    for (int i=0; i<n; i++) {
        count[a[i]]++;
    }

    for (int i=1; i<=maxvalue; i++) {
        count[i] += count[i-1];

    }

    int result[n];
    for (int i=n-1; i>=0; i--) {
        result[--count[a[i]]] = a[i];

    }

    for(int i=0; i<n; i++) {
        cout<<result[i]<<" ";
    }



}
int main () {
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    countingSort(a, n);
}
   

// input: 7
//.       23 12 8 95 39 29 41 

// output: 8 12 23 29 39 41 95 
