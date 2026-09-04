// Functions

// #include <iostream>
// using namespace std;

// void printJSR() {
//     cout << "Jay Shree Ram \n";
// }

// int main() {
//     printJSR(); 
//     return 0;   
// }

// #include <iostream>
// using namespace std;

// int printJSR() {
//     cout << "Jay Shree Ram \n";
//     return 5;
// }

// int main() {
//     int val = printJSR();
//     cout << "Value is = " << val << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sum(int a, int b) {
//     int sum = a + b;

//     return sum;
// }

// int main() {
//     int a,b;
//     cout << "Enter The First Number: ";
//     cin >> a;

//     cout << "Enter The Second Number: ";
//     cin >> b;

//     int result = sum(a,b);

//     cout << "The Sum is = " << result << endl;

//     return 0;
// }

// Calculate Sum of Numbers from 1 to N.

// #include <iostream>
// using namespace std;

// int sumN(int n) {
//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     return sum;
// }

// int main() {
//     int i;

//     cout << "Enter The Number: ";
//     cin >> i;

//     int result = sumN(i);

//     cout << "The Sum is = " << result <<endl;

//     return 0;
// }

// Calculate The Factorial Number.

// #include <iostream>
// using namespace std;

// int factorialN(int n) {
//     int fact = 1;

//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }

//     return fact;
// }

// int main() {
//     int i;

//     cout << "Enter The Number: ";
//     cin >> i;

//     int result = factorialN(i);

//     cout << "The Factorial Sum is = " << result << endl;

//     return 0;
// }

// Calcutlate The Sum of Digits.

// #include <iostream>
// using namespace std;

// int sumOfDigits(int num) {
//     int digSum = 0;

//     while(num > 0) {
//         int lastDig = num % 10;
//         num /= 10;

//         digSum += lastDig;
//     }
//     return digSum;
// }

// int main() {
//     int digSum;

//     cout << "Enter The Number: ";
//     cin >> digSum;

//     int result = sumOfDigits(digSum);

//     cout << "The Sum Of Digit is = " << result << endl;
//     return 0;
// }

// Calcutate nCr Binomial Coefficient for n & r.

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;    
}

int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n;
    cout << "Enter The n Value: ";
    cin >> n;

    int r;
    cout << "Enter The r Value: ";
    cin >> r;

    int result = nCr(n , r);

    cout << "The Sum is = " << result << endl;

    return 0;
}