#include<iostream>
using namespace std;
class Solution {
public:
    bool divisorGame(int n) {
        return n % 2 == 0;
    }
};
int main(){
	Solution sol;
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
	if(sol.divisorGame()){
		cout<<"Alice Won!"<<endl;
	}
	else{
		cout<<"Rock Won!"<<endl;
	}
}
