#include<iostream>
using namespace std;
class Solution{
	public:
	int climbStairs(int n) {
	if(n <= 2) return n; 
	int a = 1;  // ways to reach step 1
    int b = 2;  // ways to reach step 2
      for(int i = 3; i <= n; i++) {
    int c = a + b;  // total ways on step i
    a = b;          // move a to previous step
    b = c;          // move b to current step
  }
    return b;           // ways to reach step n
 }
};
int main(){
	Solution sol;
	int n;
	cout<<"Enter Number of Steps to Climb: "<<endl;
	cin>>n;
	cout<<"The Number of steps to climb "<<n<<" stairs are "<<sol.climbStairs(n)<<endl;
	
	return 0;
}
