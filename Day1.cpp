// #include <iostream>    // Boilerplate code for C++14
// using namespace std;

// int main() {
//     int age = 25;        // int variable  4 Bytes
//     char grade = 'A';      // char variable  1 Byte
//     float height = 5.9;   // float variable  4 Bytes
//     bool isStudent = true; // bool variable  1 Byte
//     double weight = 70.5;  // double variable  8 Bytes

//     cout << age << endl;
//     cout << grade << endl;
//     cout << height << endl;
//     cout << isStudent << endl;
//     cout << weight << endl;
//     return 0;

// }


// Variables and Data Types
// int age = 25;        // int variable  4 Bytes
// char grade = 'A';      // char variable  1 Byte
// float height = 5.9;   // float variable  4 Bytes
// bool isStudent = true; // bool variable  1 Byte
// double weight = 70.5;  // double variable  8 Bytes

// Type Casting

// #include <iostream>
// using namespace std;

// int main(){
//     char grade = 'A'; // char variable

//     int value = grade; // Implicit type casting from char to int
//     cout << value << endl;

//     double height = 5.9; // double variable

//     int newHeight = (int)height; // Explicit type casting from double to int
//     cout << newHeight << endl;

//     return 0;

// }


// # include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter Your age: ";
//     cin >> age;
//     cout << "Your age is: " << age << endl;
//     return 0;
// }

// Operators 
// Airthmetic Operators: +, -, *, /, %
// Assignment Operators: =, +=, -=, *=, /=, %=
// Comparison & Relational Operators: ==, !=, >, <, >=, <=
// Logical Operators: &&, ||, !
// Bitwise Operators: &, |, ^, ~, <<, >>
// Increment and Decrement Operators: ++, --


// #include <iostream>
// using namespace std;
// int main () {
    
//     int a = 5;
//     double b = 2;

//     // Arithmetic Operators
//     cout << "a + b = " << a + b << endl; // Addition
//     cout << "a - b = " << a - b << endl; // Subtraction
//     cout << "a * b = " << a * b << endl; // Multiplication
//     cout << "a / b = " << (double)a / b << endl; // Division
//     cout << "a % b = " << a % (int)b << endl; // Modulus

//     // Comparison Operators
//     cout << "a == b: " << (a == b) << endl; // Equal to
//     cout << "a != b: " << (a != b) << endl; // Not equal to
//     cout << "a > b: " << (a > b) << endl;  // Greater than
//     cout << "a < b: " << (a < b) << endl;  // Less than
//     cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
//     cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

//     // Logical Operators
//     cout << "a > 0 && b > 0: " << (a > 0 && b > 0) << endl; // Logical AND
//     cout << "a > 0 || b > 0: " << (a > 0 || b > 0) << endl; // Logical OR
//     cout << "!(a > 0): " << !(a > 0) << endl; // Logical NOT
   
//     return 0;
    
// }

// Sum Of Two Numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int num1,  num2;
//     cout << "Enter num1 :";
//     cin >> num1;

//     cout << "Enter num2 :";
//     cin >> num2;

//     int sum = num1 + num2;

//     cout << "Sum Of = " << sum << endl;
//     return 0;
// }

// Unary Operators
// ++ (Increment) and -- (Decrement)

# include <iostream>
using namespace std;

int main () {

    int a = 10;

    int b = a++;
    cout << "b = " << b << endl; 
    cout << "a = " << a << endl;

    return 0;

}
