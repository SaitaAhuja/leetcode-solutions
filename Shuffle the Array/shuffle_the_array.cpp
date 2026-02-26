#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        for(int i = 0; i < n; i++){
            ans[2*i] = nums[i];       // xi
            ans[2*i + 1] = nums[i+n]; // yi
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    vector<int> shuffled = sol.shuffle(nums, n);

    cout << "Shuffled array: ";
    for(int num : shuffled)
        cout << num << " ";
    cout << endl;

    return 0;
}
