#include<iostream>
using namespace std;
class Solution {
public:
    bool checkPerfectNumber(int num) {
    	int sum=0;
        for(int i=1;i<num;i++){
        	if(num%i==0){
        		sum +=i;
        	}
        }
        if(sum==num){
        	return true;
		}
		else{
			return false;
		}
    }
};
int main(){
	Solution sol;
	int num;
	cin>>num;
	if(sol.checkPerfectNumber(num)){
		cout<<"Is a Perfect Number"<<endl;
	}
	else{
		cout<<"Is not a Perfect Number"<<endl;
	}
}
