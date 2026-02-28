#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end()); 
    }
};
int main() { 
     Solution sol;
    string str;

    cout << "Enter a string: ";
    getline(cin, str);  // reads the whole line including spaces

    // Convert string to vector<char>
    vector<char> s(str.begin(), str.end());

    // Reverse
    sol.reverseString(s);

    // Print reversed vector
    for(char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
