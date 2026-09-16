// Binary Number System

// #include <iostream>
// using namespace std;

// int decToBinary(int decNum) {
//     int ans = 0, pow = 1;

//     while (decNum > 0) {
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }
//     return ans;
// }

// int main() {
//     int decNum; 
//     cout << "Enter The Decimal Number: ";
//     cin >> decNum;

//     int result = decToBinary(decNum);
//     cout << "Binary Equivalent: " << result << endl;

    // for (int i = 1; i < 50; i++) {
    //     cout << "Decimal: " << i << " => Binary: " << decToBinary(i) << endl;
    // }
    
//     return 0;
// }

// Binary to Decimal Conversion

#include <iostream>
using namespace std;

int binToDecimal(int binNum) {
    int ans = 0, pow = 1;

    while (binNum > 0) {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main() {
    int binNum; 
    cout << "Enter The Binary Number: ";
    cin >> binNum;

    int result = binToDecimal(binNum);
    cout << "Decimal Equivalent: " << result << endl;

    // for (int i = 1; i < 50; i++) {
    //     cout << "Binary: " << i << " => Decimal: " << binToDecimal(i) << endl;
    // }
    
    return 0;
}
