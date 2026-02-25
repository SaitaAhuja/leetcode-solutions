#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        // Bitwise logic for O(1) efficiency
        if (n <= 0) return false; //power of 4 is greater than 0
        
        // n & (n - 1LL) checks if only one bit is set (Power of 2 check as every power of four is a power of 2 too)
        return (n & (n - 1LL)) == 0 && (n % 3 == 1); // n % 3 == 1 distinguishes 4, 16, 64(powers of four) from 2, 8, 32(powers of two)
   }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (sol.isPowerOfFour(n)) {
        cout << n << " is a power of 4!" << endl;
    } else {
        cout << n << " is NOT a power of 4." << endl;
    }

    return 0;
}
