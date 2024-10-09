#include <iostream>
#include <cmath>
using namespace std;
// Inline function to check if a number is an Armstrong number
inline bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int numDigits = 0;

    // Count the number of digits in the number
    while (number > 0) {
        number /= 10;
        numDigits++;
    }

    number = originalNumber;

    // Calculate the sum of the digits raised to the power of numDigits
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    // Check if the sum is equal to the original number
    return sum == originalNumber;
}

// Inline function to print the factors of a number
inline void printFactors(int number) {
    // std::cout << number ;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    // std::cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
        printFactors(n);
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}
