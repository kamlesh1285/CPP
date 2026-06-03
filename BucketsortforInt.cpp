#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void bucketsort(int a[], int n) 
{
    vector<int>bucket[n];
    int minVal=a[0], maxVal=a[0];
    for (int i=0; i<n; i++) {
        if (a[i] < minVal)
            minVal=a[i];
        if (a[i] > maxVal)
            maxVal=a[i];
    }
    for (int i=0; i<n; i++) {
        int value=n*(a[i] - minVal) / (maxVal - minVal + 1);
        bucket[value].push_back(a[i]);
    }
    for (int i=0; i<n; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }
}

int main() {
    int n; 
    cin>>n;
    int  a[n];
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    bucketsort(a, n);
    
    for (int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
}

// input: 7
//.       23 12 8 95 39 29 41   
// output: 8 12 23 29 39 41 95
