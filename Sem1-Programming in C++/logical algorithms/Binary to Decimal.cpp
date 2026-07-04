#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary;
    cin >> binary;

    int decimal = 0, i = 0;

    while (binary > 0) {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }

    cout << decimal;
}