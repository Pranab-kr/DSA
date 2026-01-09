#include<iostream>
using namespace std;

int main(){
  // Bitwise operators example
   int a = 5;      // In binary: 0101
   int b = 3;      // In binary: 0011

    cout << "Bitwise AND (a & b): " << (a & b) << endl;   // Output: 1 (0001)
    cout << "Bitwise OR (a | b): " << (a | b) << endl;    // Output: 7 (0111)
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;   // Output: 6 (0110)
    cout << "Bitwise NOT (~a): " << (~a) << endl;         // Output: -6 (2's complement of 0101 is 1010)
    cout << "Left Shift (a << 1): " << (a << 1) << endl;   // Output: 10 (1010) | num * 2^x for x=1
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl;  // Output: 2 (0010)  | num / 2^x for x=1

    return 0;
}
