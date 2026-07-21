#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            bool flag = true;
            int temp = i;

            while (temp > 0) {
                int last = temp % 10;

                if (last == 0 || i % last != 0) {
                    flag = false;
                    break;
                }

                temp = temp / 10;
            }

            if (flag == true) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int left, right;
    cin >> left >> right;

    vector<int> result = obj.selfDividingNumbers(left, right);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
