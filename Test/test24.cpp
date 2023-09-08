#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Binary representation
    string binary_representation = bitset<8>(N).to_string();

    // Complement
    int complement = ~N ;

    // Left shift by 2
    int left_shift = N << 2;

    // Right shift by 2
    int right_shift = N >> 2;

    // Check if it is negative
    bool is_negative = N < 0;

    // Absolute value
    int absolute_value = abs(N);

    // Output
    cout << "Binary representation: " << binary_representation << endl;
    cout << "Complement: " << complement << endl;
    cout << "Left shift by 2: " << left_shift << endl;
    cout << "Right shift by 2: " << right_shift << endl;
    cout << "Is negative? " << (is_negative ? "true" : "false") << endl;
    cout << "Absolute value: " << absolute_value << endl;

    return 0;
}
