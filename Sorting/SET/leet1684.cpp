// Q-1684. Count the Number of Consistent Strings
//You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

//Return the number of consistent strings in the array words.

 



#include <unordered_set>
#include <vector>
#include <string>
using namespace std;       
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st(allowed.begin(), allowed.end());
        
        int count = 0;
        
        for (string word : words) {
            bool consistent = true;
            
            for (char ch : word) {
                if (st.find(ch) == st.end()) {
                    consistent = false;
                    break;
                }
            }
            
            if (consistent) {
                count++;
            }
        }
        
        return count;
    }
};






