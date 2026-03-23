#include<iostream>
using namespace std;
class Solution {
public:
  long long countCommas(long long n) {
    long long total = 0;
    for (long long i = 1000; i <= n; i *= 1000) {
        long long next = i * 1000 - 1;
        if (next > n) next = n;
        total += (next - i + 1) * 1;  
    }
    return total;
}
};
int main(){
long long n;
    cin >> n;
    Solution sol;
    cout <<sol.countCommas(n) << endl;
    return 0;
}
