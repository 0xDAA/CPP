#include <iostream>

using namespace std;

int main() {
    char a = 'A';
    cout << sizeof(a) << "\n"; // 1 Byte

    auto b = 'B'; // Automatic
    cout << sizeof(b) << "\n"; // 1 Byte

    auto c = "C"; // Automatic
    cout << sizeof(c) << "\n"; // 8 Byte

    char d = 'Z';
    cout <<int(d) << endl; // 90 in ASCII Table

    cout << int('%')<<"\n"; // 37
    cout << int('(')<<"\n"; // 40
    cout << int(')')<<"\n"; // 41
    cout << int('Q')<<"\n"; // 81
    // cout << int("Q")<<"\n"; // Error (Double quote not allowed to convert from char to ascii code)
    return 0;
}
