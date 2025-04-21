// You are using GCC
#include <stdio.h>
#include <stdlib.h>
void bubblesort(int n, int arr[]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



// This will be included in main function, don't create different function as it a function can't return two things.
int findmax(int n, int arr[]){
    int max = 0;
    int count = 0;
    int el = arr[0];
    int maxel = 0;
    
    for(int i=0; i<n; i++){
        if(el == arr[i]){
            count++;
        }
        else{
            if(count>max){
                max = count;
                maxel = arr[i-1];
            }
            
            count = 1;
            el = arr[i];
        }
    }
    return max, maxel;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    bubblesort(n, arr);
    int a,el = findmax(n, arr);
    printf("%d:%d", el, a);
    
    return 0;
}
