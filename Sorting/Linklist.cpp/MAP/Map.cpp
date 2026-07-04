// unit 5 part 2 -- Map

// Q1-
#include <iostream>
#include <map>
using namespace std;

int main() {
	map <int, int> m1;
	int x, key;
	cin>>x;
	for(int i=0; i<x; i++) {
	    cin>>key;
	    m1[key]=key*key;
	}
	
	for(auto p: m1) {
	    cout<<p.first<<" "<<p.second<<endl;
	}
	

}















// Q2- Unique and non unique - given an array with N integers, find the unique and non unique elements in the array.
#include <iostream>
#include <map>
using namespace std;    
int main() {
    int n, key;
    cin>>n;
    map <int, int> m1;
    for(int i=0; i<n; i++) {
        cin>>key;
        m1[key]++;
    }
    cout<<"Unique elements: ";
    for(auto p: m1) {
        if(p.second == 1) {
            cout<<p.first<<" ";
        }
    }
    cout<<endl<<"Non unique elements: ";
    for(auto p: m1) {
        if(p.second > 1) {
            cout<<p.first<<" ";
        }
    }
}


