// This is a basic C program to input an array and print the count of odd elements in that array

#include <stdio.h>

int main(){
  int n;
  
  printf("Enter the size of list: ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Enter the elements of the list: ");
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  
  int count=0;
  
  for(int i=0; i<n; i++){
    if(arr[i] % 2 != 0){
      count++;
    }
  }
    if(count>0){
        printf("%d", count);
    }
      
    else{
        printf("No odd number present in the list");
    }
  
  return 0;
  }

#---------------------------------------------------------------

// write a program to print all the prime numbers from 1 and n.
#include <stdio.h>
int prime_checker(int n){
  for(int i=2; i<n; i++){
      int counter = 0;
    for(int j=2; j<i; j++){
      if(i % j == 0){
        break;
      }
      else{
        counter += 1;
      }
    }
    if(counter == i - 2){
        printf("%d\n", i);
    }
  }
}


int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  prime_checker(n);
  return 0;
}
