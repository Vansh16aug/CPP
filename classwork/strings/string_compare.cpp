#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    
    // Using compare function
    int result = s1.compare(s2);
    
    if (result == 0) {
        cout << "s1 is equal to s2" << endl;
    } else if (result < 0) {
        cout << "s1 is less than s2" << endl;
    } else {
        cout << "s1 is greater than s2" << endl;
    }
    
    // Using comparison operators directly
    if (s1 == s2) {
        cout << "s1 is equal to s2" << endl;
    } else if (s1 < s2) {
        cout << "s1 is less than s2" << endl;
    } else {
        cout << "s1 is greater than s2" << endl;
    }
    
    return 0;
}
