#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, sum = 0;
    cin>>n;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }
    if (sum == n)
        count<<"Armstrong Number";
    else
        cout<<"Not Armstrong Number";   
}

