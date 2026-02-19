#include<iostream>
#include<vector> //dynamic array (array size can change on runtime(.size() will tell the size on runtime otherwise size has to be given manually))
#include<unordered_set> // we could have used nested loop common method but that won't work for larger number of arrays
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
    	unordered_set<int> s; //hash set

         for(int i=0;i<nums.size();i++){
         	if(s.count(nums[i])){  //s.count checks if set's' already has that array element
         		return true;       // returns true if it already has that element
			 }
         	    s.insert(nums[i]);  //if set's' does not have that element then s.insert adds that element in set's'
			 }
		 return false;              //if no element in entire arrasy appears to repeat it returns false
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};

    if(sol.containsDuplicate(nums)) {
        cout << "Duplicate found!" << endl;
    } else {
        cout << "All unique!" << endl;
    }

    return 0;
}
