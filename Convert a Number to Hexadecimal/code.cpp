#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string toHex(int num) {
        if (num == 0) {
            return "0";
        }

        string hex_map = "0123456789abcdef";
        string result = "";
        unsigned int n = num;

        while (n > 0) {
            int last_four_bits = n & 0xF;
            result += hex_map[last_four_bits];
            n >>= 4;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution solver;

    cout << "26 in hex: " << solver.toHex(26) << endl;
    cout << "-1 in hex: " << solver.toHex(-1) << endl;
    cout << "0 in hex: " << solver.toHex(0) << endl;
    cout << "-2147483648 in hex: " << solver.toHex(-2147483648) << endl;

    return 0;
}
