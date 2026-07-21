// Q1 Print number from 1 to N. 

#include <iostream>
using namespace std;

void print1ToN(int n) {
    if (n==0) return;
    print1ToN(n-1);
    cout<<n<<" ";
}

int main() {
    int n;
    cin >> n;
    print1ToN(n);
    return 0;
}



// Q2. Print numbers from N to 1


#include <iostream>
using namespace std;

void printNTo1(int n) {
    if (n==0) return;
    cout<<n<<" ";
    printNTo1(n-1);
}

int main() {
    int n;
    cin>>n;
    printNTo1(n);
    
}

// Q3. Print sum of first N natural numbers 


#include <iostream>
using namespace std;

int sumN(int n) {
    if (n==0) return 0;
    return n + sumN(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << sumN(n);
    
} 


// Q4 Calculate factorial of a number N
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n==0) return 1;
    return n * factorial(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    
}


// Q5 Find Nth Fibonacci number
#include <iostream>
using namespace std;

int fib(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);
    
}    








// Q6 Calculate  a^b using recursion 

#include <iostream>
using namespace std;

long long power(int a, int b) {
    if (b==0) return 1;
    return a * power(a, b-1);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    
}


// Q7 WAP to convert a decimal number to binary using recursion

#include <iostream> 
using namespace std;

void decimalToBinary(int n) {
    if (n==0) return;
    decimalToBinary(n/2);
    cout<<n%2;

}
int main() {
    int n;
    cin>>n;
    decimalToBinary(n);
}

// Q8 WAP to convert a decinal number to octal uswing recursion 

#include <iostream>
using namespace std;

void decimalToOctal(int n) {
    if (n==0) return;
    decimalToOctal(n/8);
    cout<<n%8;
}

int main() {
    int n;
    cin>>n;
    decimalToOctal(n);

}


// Q9 WAP to convert a decimal number to hexadecimal using recursion 

#include <iostream>
using namespace std;

void decimalToHexadecimal(int n) {
    if (n==0) return;
    decimalToHexadecimal(n/16);
    int rem = n%16;
    if (rem<10) cout<<rem;
    else cout<<(char)(rem-10+'A');

}
int main() {
    int n;
    cin>>n;
    decimalToHexadecimal(n);
}
