#include <iostream>

using namespace std;

int main() {
    int n = 10;

    int *pointer_to_n = &n; 
    // Address of operator & returns the address of n, which is stored in the pointer
    // A pointer is declared with an asterisk (*) before its name, indicating that it is a pointer type.
    
    cout << "n: " << n << endl;
    cout << "&n: " << &n << endl;
    cout << "Declare pointer_to_n: " << "int *pointer_to_n = &n;" << endl;
    cout << "pointer_to_n:" << pointer_to_n << endl;
    cout << "*pointer_to_n: " << *pointer_to_n << endl; // Dereferencing the pointer to get the value of n

    //  Address of pointer_to_n
    cout << "&pointer_to_n: " << &pointer_to_n << endl;

    // So when we declare a pointer we have the * between the type and the name
    // but when we dereference the pointer we have the * before the pointer name
    // So after it's declared the pointer without the * is the location pointed to You use the * to get the value in that location
    cout << "Value of n using *pointer_to_n: " << *pointer_to_n << endl;
    cout << "Value of n using pointer_to_n: " << pointer_to_n << endl;

    n = 20;
    cout << "n: " << n << endl;
    cout << "pointer_to_n: " << pointer_to_n << endl;
    cout << "*pointer_to_n: " << *pointer_to_n << endl;

    cout << "*pointer_to_n - 1: " << *(pointer_to_n - 1) << endl;

    *(pointer_to_n - 1) = 30;
    cout << "*pointer_to_n - 1: " << *(pointer_to_n - 1) << endl;


    // Find limit of allocated memory
    int offset = 0;
    while(true) {
        cout << "*pointer_to_n + " << offset << ": " << *(pointer_to_n + offset) << endl;
        offset += 100;
    }

    return 0;
}
