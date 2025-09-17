#include <stdio.h>

int numberOfSteps(int n){
    int steps = 0;
    while (n > 0){
          if (n % 2 == 0){
                  n = n/2;
          }
          else{
               n = n - 1;
          }        
          steps ++;
          }
          return steps;
     }
     int main(){
         int num;
         printf("Enter a number: ");
         scanf("%d",&num);
         
     int result = numberOfSteps(num);
     printf("Number of steps to reduce %d to zero = %d\n", num, result);
      return 0;
}
