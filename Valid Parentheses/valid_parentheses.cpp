#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> sh;

        for (char ch : s) {
            if (ch == '[' || ch == '(' || ch == '{') {
                sh.push(ch);
            }
            if (ch == ']' || ch == ')' || ch == '}') {
                if (sh.empty()) {
                    return false;
                }
                char top = sh.top();
                if (ch == ')' && top != '(') return false;
                if (ch == ']' && top != '[') return false;
                if (ch == '}' && top != '{') return false;
                sh.pop();
            }
        }
        return sh.empty();
    }
};

int main() {
    Solution sol;

    string test1 = "()";
    string test2 = "()[]{}";
    string test3 = "(]";
    string test4 = "([])";
    string test5 = "([)]";

    cout << test1 << " -> " << (sol.isValid(test1) ? "true" : "false") << endl;
    cout << test2 << " -> " << (sol.isValid(test2) ? "true" : "false") << endl;
    cout << test3 << " -> " << (sol.isValid(test3) ? "true" : "false") << endl;
    cout << test4 << " -> " << (sol.isValid(test4) ? "true" : "false") << endl;
    cout << test5 << " -> " << (sol.isValid(test5) ? "true" : "false") << endl;

    string userInput;
    cout << "\nEnter your own string to test: ";
    cin >> userInput;
    cout << userInput << " -> " << (sol.isValid(userInput) ? "true" : "false") << endl;

    return 0;
}
