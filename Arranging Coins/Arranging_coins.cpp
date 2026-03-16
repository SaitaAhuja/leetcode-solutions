#include<iostream>
using namespace std;
class Solution {
public:
    long arrangeCoins(long n) {
    	long count = 0,sum = 0;
        for(long i=1;i<=n;i++){
           if((sum+= i) <= n){
			count ++;		
	   }
	   else{
	   	return count;
	   }
    }
    return count;
 }
};
int main(){
   long n;
   cin>>n;
   Solution sol;
   cout<<sol.arrangeCoins(n)<<endl;
	return 0;
}
