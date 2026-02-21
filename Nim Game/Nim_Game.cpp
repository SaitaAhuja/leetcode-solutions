#include<iostream>
using namespace std;
class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};
int main(){
    int n;
    cout << "Enter number of stones: ";
    cin >> n;
Solution sol;
 if(sol.canWinNim(n)){
 	cout<<"You Win!"<<endl;
 }
 else{
 	cout<<"You Lose!"<<endl;
 }
	return 0;
}
