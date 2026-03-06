// Binary Search Method(Time Complexity: O(log n)) (Space Complexity: O(1))
#include<iostream>
using namespace std;
class Solution{
	public:
bool isPerfectSquare(int num) {
    long left = 1, right = num;

    while(left <= right){
        long mid = left + (right-left)/2;
        long sq = mid * mid;

        if(sq == num) return true;
        else if(sq < num) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}
};
int main(){
int num; cout<<"Enter Number:"<<endl;
 cin>>num; 
 Solution sol; 
 if(sol.isPerfectSquare(num)){ 
 cout<<"Is a Perfect Square"<<endl;
  } else{
   cout<<"Is a NOT Perfect Square"<<endl; 
   } return 0;
}
