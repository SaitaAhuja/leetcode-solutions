#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> constructRectangle(int area) {
    int w = sqrt(area);  
    
    while (area % w != 0) {  
        w--;                 
    }
    
    return {area / w, w};
}
};
int main(){
    Solution sol;
	int area;
	cin>>area;
	vector<int> result = sol.constructRectangle(area); 
    cout << result[0] << " " << result[1] << endl;
	return 0;
}
