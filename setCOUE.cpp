                                             // SET
                                      // Collection of unique elements.

// Time Complexity:
// Insertion: O(log n)
// Deletion: O(log n)
// Search: O(log n)

//Q1 - Given an array of N integer . print the unique element from the array in increasing order . also print the count of unique element.
#include <iostream>
#include <set>
using namespace std;

int main() {
	
	set <int> set1;
	int n, x;
	cin>>n;
	for (int i=0; i<n; i++) 
	{
	    cin>>x;
	    set1.insert(x);
	    
	}
	
	for (int z: set1) 
	{
	    cout<<z<<" ";
	}
	cout<<endl;
	cout<<set1.size();

}

// Input:11 
//10 2 3 4 2 5 6 4 2 3 6 
// Output: 2 3 4 5 6 10


//Q2 - Given two strings S1 and S2, having lengths N and M respectively. Print the count if characters from S1 , which are also present in S2. Duplicate character in S1 should be counted only once, and small and capital cases should be considered different.
#include <iostream>
#include <set>
using namespace std;

int main() {
	int m, n;
	string s1, s2;
	cin>>m>>n>>s1>>s2;
	
	set <char> set1;
	set <char> set2;
	set <char> result;
	
	for (char z: s1)
	{
	    set1.insert(z);
	}
	
	for (char z: s2)
	{
	    set2.insert(z);
	}
	
	
	
	set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(result, result.begin()) );

	
	for (char z: result)
	{
	    cout<<z<<" ";
	}
	
}

// Input: 13 16 
// Quickbrownfox
// qdhghfjuhbnjhdkj

// Output: Q b r w n f o x



//Q3 - You are given two arrays having M and N integers respectively. Let P be the number of elements in the first array but not in the second array. Let Q be the number of element in the second array but not in the first array. Print the values of M and N, The next two lines contain the elements of the first and second array respectively. Print the values of P and Q.

#include <iostream>
#include <set>
using namespace std;

int main() {
	// your code goes here
	
	int m, n, x;
	cin>>m>>n;
	set <int> A;
	set <int> B;
	for (int i=0; i<m; i++) {
	    cin>>x;
	    A.insert(x);
	}
	for (int i=0; i<n; i++) {
	    cin>>x;
	    B.insert(x);
	}
	
	set <int> r1; // A-B
	set <int> r2; //B-A
	set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(r1, r1.begin()));
	set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(r2, r2.begin()));
	cout<<r1.size()*r2.size();

}

//Input: 5 6
//2 3 1 4 12 
//10 14 4 12 2 7
//Output: 4
