// Write a program to check if a number is even or odd using bitwise operators.
#include <stdio.h>

int main(){
  
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  
  if(n & 1){
    
    printf("%d is an odd number", n);
  }    
  else{
    printf("%d is an even number", n);
  }
  
  return 0;
  
}
