// For Small strings → brute-force works
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
     int n = s.length();	
     for(int i = 0 ; i<n ; i++){
     	int flag = 1;
     	for(int j = 0 ; j<n ; j++){
     		if(i != j && s[i]==s[j]){
     			flag = 0;
     			break;
			 }
		 }
		 if(flag){
                return i;
	 }
    }
      return -1;
    }
};
int main(){
	string s;
	cout<<"Enter String: "<<endl;
	cin>>s;
	Solution sol;
	cout<<sol.firstUniqChar(s)<<endl;
	
	return 0;
}
//Slow for long strings (TLE on LeetCode for n ~ 10⁵)

// Another Method:
// For Large strings /frequency array / O(n) method is recommended
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};  // Frequency array for lowercase letters

        // Step 1: Count frequency of each character
        for(char c : s){
            freq[c - 'a']++;
        }

        // Step 2: Find first character with frequency 1
        for(int i = 0; i < s.length(); i++){
            if(freq[s[i] - 'a'] == 1){
                return i;
            }
        }

        return -1;  // No unique character found
    }
};

int main() {
    string s;
    cout << "Enter String: ";
    cin >> s;

    Solution sol;
    cout << sol.firstUniqChar(s) << endl;

    return 0;
}
//Uses extra space (though constant, 26 ints)/For uppercase + lowercase, space needs adjustment
