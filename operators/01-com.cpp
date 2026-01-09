#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    //precedence and associativity of operators
    cout << "Operator Precedence and Associativity Example:" << endl;
    int result = a + b * 2 - (a / 2);
    cout << "Result of a + b * 2 - (a / 2): " << result << endl;

    // Using arithmetic operators
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (b / a) << endl;
    cout << "Modulus: " << (b % a) << endl;

    // Using relational operators
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b? " << (a != b) << endl;
    cout << "Is a greater than b? " << (a > b) << endl;
    cout << "Is a less than b? " << (a < b) << endl;

    // Using logical operators
    cout << "Logical AND: " << ((a < b) && (a > 5)) << endl;
    cout << "Logical OR: " << ((a < b) || (a > 15)) << endl;
    cout << "Logical NOT: " << !(a < b) << endl;

    return 0;
}
