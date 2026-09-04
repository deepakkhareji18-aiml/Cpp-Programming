// Conditional Statements 

// if else 
// 1. Find whether the number is positive or negative

// #include <iostream>
// using namespace std;

// int main() {
//     int num = 18;

//     if (num >= 0) {
//         cout << "Positive Number\n" << endl;
//     } else {
//         cout << "Negative Number\n" << endl;
//     }
     
//     return 0;
// }

// 2. Find whether the number is even or odd

// #include <iostream>
// using namespace std;

// int main () {
//     int age;
//     cout << " Enter Your Age: ";
//     cin >> age;
//     cout << " Your Age Is : " << age << endl;

//     if (age >= 18) {
//         cout << " You Can Drive " << endl;
//     } else {
//         cout << " You Cannot Drive " << endl;
//     }

//     return 0;
// }

// 3. Find the Even or Odd Number

// #include <iostream>
// using namespace std;

// int main () {
//     int n;
//     cout << " Enter The Numbers: ";
//     cin >> n;

//     if (n % 2 == 0) {
//         cout << " The Number Is Even\n " << endl;
//     } else {
//         cout << " The Number Is Odd\n " << endl;
//     }

//     return 0;
// }

// if else if else

// 1. Find the Grade of Student

// #include <iostream>
// using namespace std;

// int main () {
//     int marks;
//     cout << " Enter Your Marks: ";
//     cin >> marks;

//     if (marks >= 90 && marks <= 100) {
//         cout << " Your Grade Is A+\n " << endl;
//     } else if (marks >= 80 && marks < 90) {
//         cout << " Your Grade Is A\n " << endl;
//     } else if (marks >= 70 && marks < 80) {
//         cout << " Your Grade Is B+\n " << endl;
//     } else if (marks >= 60 && marks < 70) {
//         cout << " Your Grade Is B\n " << endl;
//     } else if (marks >= 50 && marks < 60) {
//         cout << " Your Grade Is C+\n " << endl;
//     } else if (marks >= 40 && marks < 50) {
//         cout << " Your Grade Is C\n " << endl;
//     } else {
//         cout << " You Are Fail\n " << endl;
//     }

//     return 0;
// }

// Q. Find Character Lowercase Or Uppercase  ASCII Value  A - Z -> 65 - 90, a - z -> 97 - 122

// #include <iostream>
// using namespace std;

// int main () {
//     char ch;
//     cout << " Enter The Character: ";
//     cin >> ch;

//     if (ch >= 'A' && ch <= 'Z') {
//         cout << " The Character Is Uppercase\n " << endl;
//     } else if (ch >= 'a' && ch <= 'z') {
//         cout << " The Character Is Lowercase\n " << endl;
//     } else {
//         cout << " The Character Is Not An Alphabet\n " << endl;
//     }

//     return 0;
// }

// Ternary Statement 
// #include <iostream>
// using namespace std;

// int main () {
//     int n = -10;
//     cout << (n >= 0 ? "Positive" : "Negative") << endl;
    
//     return 0;
// }

// Loops 

// While Loop

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 50;
//     int i = 1;
//     while (i <= n) {
//         cout << i << " ";
//         i++;
//     }
//     cout << endl;
//     return 0;
// }


// For Loop

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 50;
//     for (int i = 1; i <= n; i++) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Q. Sum of Numbers from 1 to n

// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << " Enter The Number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i = i + 2) {
//         sum += i;
//     }
//     cout << " Sum of Numbers from 1 to " << n << " is: " << sum << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << " Enter The Number: ";
//     cin >> n;

//     int i = 1;
//     while (i <= n) {
//         sum += i;
//         i = i + 2;
//     }
//     cout << " Sum of Numbers from 1 to " << n << " is: " << sum << endl;
//     return 0;
// }

// Q. Check Whether the Number is Prime or Not

// #include <iostream>
// using namespace std;

// int main () {
//     int n;
//     cout << " Enter The Number: ";
//     cin >> n;

//     bool isPrime = true;

//     if (n <= 1) {
//         isPrime = false;
//     } else {
//         for (int i = 2; i * i <= n; i++) {    //  i <= n / 2 or -1 
//             if (n % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }

//     if (isPrime) {
//         cout << n << " is a Prime Number." << endl;
//     } else {
//         cout << n << " is Not a Prime Number." << endl;
//     }

//     return 0;
// }

// # Nested Loops

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << " Enter The Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a = 10;
        for (int j = 1; j <= a; j++) {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}