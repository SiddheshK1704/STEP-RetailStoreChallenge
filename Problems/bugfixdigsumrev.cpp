#include <iostream>
using namespace std;

// Returns the sum of the decimal digits of n
long long digitSum(long long n) {
    long long total = 0;

    while (n > 0) {
        total += n % 10;
        n /= 10;      
    }

    return total;
}

// Returns the number formed by reversing the digits of n
long long reverseNumber(long long n) {
    long long rev = 0;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return rev;
}

int main() {
    long long n;
    cin >> n;

    cout << "Digit Sum = " << digitSum(n) << "\n";
    cout << "Reversed = " << reverseNumber(n) << "\n";

    return 0;
}