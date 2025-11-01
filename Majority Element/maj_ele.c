#include <stdio.h>
int main() {
int n;
printf("Enter the no. of digits: ");
scanf("%d",&n);
int num[n];
for(int i = 0;i<n;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&num[i]);
}
printf("[");
for(int i = 0;i<n;i++){
    printf("%d",num[i]);
if(i<n-1){
    printf(",");
}
}    
printf("]");
int count,maxcount;
int flag =0;
int r = n/2;
int  maj;
for(int i=0;i<n;i++){
    count = 0;
    for(int j=0;j<n;j++){
      if (num[i]==num[j]){
          count ++;
      }
          if (count > r){
          maj = num[i];
          maxcount = count;
          flag =1;
          break;
      }
      
    }
    if (flag){
        break;
    }
   }
    printf("\nThe majority number is %d\n",maj);
    printf("The majority number has appeared %d times\n",maxcount);
    
    return 0;
}
