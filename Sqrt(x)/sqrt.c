#include <stdio.h>

int mySqrt(int x) {
    if (x == 0 || x == 1) 
        return x;  // square root of 0 or 1 is itself
    
    long start = 1, end = x, ans = 0;
    
    while (start <= end) {
        long mid = start + (end - start) / 2;
        
        if (mid * mid == x) {
            return mid;  // perfect square
        } else if (mid * mid < x) {
            ans = mid;    // store current possible answer
            start = mid + 1;
        } else {
            end = mid - 1; // mid*mid > x, search lower half
        }
    }
    
    return ans;  // return the integer part of sqrt(x)
}

// Optional main() to test
int main() {
    int x = 8;
    printf("Sqrt(%d) = %d\n", x, mySqrt(x));  // Output: 2
    return 0;
}
