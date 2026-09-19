// Bitwise Operators...

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter 1st integer: ";
//     cin >> a;
//     cout << "Enter 2nd integer: ";
//     cin >> b;

//     cout << "a & b: " << (a & b) << endl; // Bitwise AND
//     cout << "a | b: " << (a | b) << endl; // Bitwise OR
//     cout << "a ^ b: " << (a ^ b) << endl; // Bitwise XOR
//     cout << "~a: " << (~a) << endl; // Bitwise NOT
//     cout << "a << 1: " << (a << 1) << endl; // Left shift
//     cout << "b >> 1: " << (b >> 1) << endl; // Right shift

//     return 0;
// }

// Operator Precedence and Associativity...

// #include <iostream>
// using namespace std;

// int main() {
//     int x, y, z;
//     cout << "Enter 1st integer: ";
//     cin >> x;
//     cout << "Enter 2nd integer: ";
//     cin >> y;
//     cout << "Enter 3rd integer: ";
//     cin >> z;

//     cout << "x + y * z: " << (x + y * z) << endl; // Multiplication has higher precedence
//     cout << "(x + y) * z: " << ((x + y) * z) << endl; // Parentheses override precedence
   
//     return 0;
// }

// Operator Precedence Table (Partial)
// !, ++, - unary operators...  R to L
// *, /, % binary operators...  L to R
// +, - binary operators...  L to R
// !=, +=, -=, *=, /= assignment operators...  R to L
// &&, || logical operators...  L to R
// ? : conditional operator...  R to L

// Scope 
// Two Types of Scope: Local Scope and Global Scope

// #include <iostream>
// using namespace std;

// int global_var = 10; // Global variable

// int main() {
//     int local_var = 20; // Local variable
//     cout << "Global variable: " << global_var << endl;
//     cout << "Local variable: " << local_var << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int x = 10; // Global variable

// int fun() {
//     cout << "x: " << x << endl;
//     return 0;
// }

// int main() {
//     fun();
//     return 0;
// }

// Data Type Modifiers

#include <iostream>
using namespace std;

int main() {
   
    cout << "sizeof(int): " << sizeof(int) << " bytes" << endl;
    cout << "sizeof(short int): " << sizeof(short int) << " bytes" << endl;
    cout << "sizeof(long int): " << sizeof(long int) << " bytes" << endl;
    cout << "sizeof(long long int): " << sizeof(long long int) << " bytes" << endl;
    cout << "sizeof(unsigned int): " << sizeof(unsigned int) << " bytes" << endl;
    cout << "sizeof(signed int): " << sizeof(signed int) << " bytes" << endl;
   
    return 0;

}

