#include <iostream>
using namespace std;

int main() {
    int n, temp, rev = 0;
    cin>>n;
    temp = n;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if (temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}