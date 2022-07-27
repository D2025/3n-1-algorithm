#include <stdio.h>

int main(void) {
  unsigned long long int n = 172800000001;
  unsigned long long int i = n;
  while(1==1){
    while(i!=1){
      //main calculations
      if(i%2 == 0){
        i = i/2;
      }
      
      else{
        i = i*3+1;
      }
      //end

      //loop detection
      if(i==n){
        printf("Number %lld looped", n);
        break;
      }
      //end
      
      //optimization
      if(i<n){
        i = 1;
      }
      //end
    }
  if(n%100000000==1){
    printf("%lld reached 1\n", n);
  }
  n += 2;
  i = n;
  }
}
