#include<iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;
        string result = "";

        while(i >= 0 || j >= 0 || carry != 0){
            int digit1 = (i >= 0) ? num1[i] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            result.push_back((sum % 10) + '0');  // append digit
            carry = sum / 10;

            i--;
            j--;
        }

        reverse(result.begin(), result.end());  // final correct order
        return result;
    }
};

int main(){
    Solution sol;
    string num1, num2;
    cout << "Enter Number 1:" << endl;
    cin >> num1;
    cout << "Enter Number 2:" << endl;
    cin >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is " 
         << sol.addStrings(num1, num2) << endl;

    return 0;
}
