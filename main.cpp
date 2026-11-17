#include <iostream>
#include <bitset>
#include <cstdint>
#include <climits>
#include <iomanip>
#include <sstream>

using namespace std;

void print_tab(string s, int chars_per_col = 2, int tab_w = 4, int offset = 0) {
    if(offset > 0) {
        cout << setw(offset) << " "; 
    }
    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
        if(((i + 1) % chars_per_col) == 0) {
            cout << setw(tab_w) << " "; 
        }
    }
}

int main() {
    stringstream ss;

    int n = 42;

    ss << &n;
    size_t address_of_n = stoull(ss.str(),0,0);

    cout << "n: " << n << endl;
    cout << "&n (decimal): " << dec << address_of_n << endl;
    ss.str("");
    ss << hex << setw(sizeof(address_of_n)*2) << setfill('0') << right << address_of_n;
    cout << "&n    (hex): ";
    print_tab(ss.str(), 1, 4, 3);
    cout << endl;

    ss.str("");
    ss << bitset<sizeof(address_of_n)* CHAR_BIT>(address_of_n);   
    cout << "&n (binary): ";
    print_tab(ss.str(), 4, 1);
    cout << endl;    
}


