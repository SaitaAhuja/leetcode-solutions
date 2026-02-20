#include<iostream>
#include<vector> 
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;          
        int j = n - 1;          
        int k = m + n - 1;     

        while (j >= 0) {

            if (i >= 0 && nums1[i] > nums2[j]) {

                nums1[k] = nums1[i];
                k --;
                i --;

            } else {

                nums1[k] = nums2[j];
                k --;
                j --;
            }
        }
    }
    void display(vector<int>& nums1){
    		cout<<"[";
		for(int i = 0 ;i < nums1.size() ; i++ ){
			cout<<nums1[i]<<" ";	
		}
		cout<<"]";
	}
};
int main(){
 Solution s1;
 vector<int> nums1 = {1,2,3,0,0,0};
 vector<int> nums2 = {2,5,6};
 	s1.merge(nums1,3,nums2,3);
 	s1.display((nums1));

	return 0;
}
