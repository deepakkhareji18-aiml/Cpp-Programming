// Pattern Programs

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << " * ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number : ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << " * ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << " Enter The Number : ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         char ch = 'A';

//         for (int j = 0; j < n; j++) {
//             cout << ch << " ";
//             ch ++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Square Pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     int num = 1;

//     cout << "Enter The Number : ";
//     cin >> n;
//     num = 1;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     int num = 1;

//     cout << "Enter The Number : ";
//     cin >> n;
//     char ch = 'A';

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Tringle Pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i+1; j++){
//                 cout << " * "; 
//         }

//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i+1; j++){
//                 cout << (i + 1) << " "; 
//         }

//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << char('A' + i) << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << char('A' + i);
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 1; j <= i + 1; j++) {
//             cout << j ;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << char('A' + j);
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Reverse Triangle Pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j > 0; j--) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j >= 0; j--) {
//             cout << char ('A' + j) << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Floyd's Triangle Pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;
//     int num = 1;

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j > 0; j--){
//             cout << num << " ";
//             num++; 
//         }        
//         cout << endl;
//     }

//     return 0;
//}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;
//     char ch = 'A';

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j > 0; j--){
//             cout << ch << " ";
//             ch++; 
//         }        
//         cout << endl;
//     }

//     return 0;
// }

// Inverted Triangle Pattern

// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter The Number: ";
//     cin >> n;

//     int num = 1;

//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
    
//         for (int j = 0; j < n - i; j++) {
//             cout << (i + 1); 
//         }

//         cout << endl;    
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout << " Ener The Number: ";
//     cin >> n;

//     char ch = 'A';

//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
        
//         for (int j = 0; j < n - i; j++) {
//             cout << char(ch + i);
//         }

//         cout << endl;
//     }

//     return 0;
// }

// Pyramid Pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << " Enter The Number: ";
//     cin >> n;

//     int i = 1;

//     for (i = 0; i < n; i++) {

//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         for (int j = 1; j <= i + 1; j++) {
//             cout << j;
//         }

//         for (int j = i; j > 0; j--) {
//             cout << j;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// Hollow Diamnd Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    // Bottom
    for (int i = 0; i < n - 1; i++) {
        // Spaces

        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        cout << "*";

        if(i != n - 2) {
            // Spaces

            for (int j = 0; j < 2 * (n - i) - 5; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;

    }

    return 0;
}

