#include<iostream>
using namespace std;

int main() {
    int a = 5;

    a+=3;  // Equivalent to a = a + 3
    cout << "After a += 3, a = " << a << endl; // a = 8

    a-=2;  // Equivalent to a = a - 2
    cout << "After a -= 2, a = " << a << endl; // a = 6

    a*=4;  // Equivalent to a = a * 4
    cout << "After a *= 4, a = " << a << endl; // a = 24

    a/=6;  // Equivalent to a = a / 6
    cout << "After a /= 6, a = " << a << endl; // a = 4

    a%=3;  // Equivalent to a = a % 3
    cout << "After a %= 3, a = " << a << endl; // a = 1

    return 0;
}
