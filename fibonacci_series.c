// This is a basic program to print fibonacci series upto n terms
#include <stdio.h>

int main(){
int n;
  
printf("Enter a number: ");
scanf("%d", &n);
int n1 = 0;
int n2 = 1;
  
for(int i=0; i<n; i++){
  printf("%d ", n1);
  int n3 = n1 + n2;
  n1 = n2;
  n2 = n3;
}
return 0;
}
