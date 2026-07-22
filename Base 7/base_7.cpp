#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    string convertToBase7(int num){
    	int rem;
    	int temp;
    	int negative=false;
    	string store;
    	if(num==0){
    		return "0";
		}
		if(num<0){
			negative = true;
			num = abs(num);
		}
		temp=num;
          while(temp!=0){
          	rem = temp%7;
          	store.push_back('0' + rem);
          	temp = temp/7;
		  }
		  reverse(store.begin(),store.end());
		  if(negative){
		  	store = "-" + store;
		  }
		  return store;
		  
		  
    }
};
int main(){
	Solution sol;
	int number;
	cin>>number;
	cout<<sol.convertToBase7(number)<<endl;
	
}
