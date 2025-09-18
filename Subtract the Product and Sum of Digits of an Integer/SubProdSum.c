#include <stdio.h>
int subtractProductAndSum(int n){
    int sum=0, prod=1;
    while (n > 0){
    int digit = n%10;
       sum += digit;
       prod *= digit;
       n /= 10;
}
 return prod - sum;
}
 int main(){
     int num;
     printf("Enter a number: ");
     scanf("%d",&num);
     
     int result = subtractProductAndSum(num);
     printf("Product - Sum of digits of %d = %d\n", num, result);
    return 0;
}
