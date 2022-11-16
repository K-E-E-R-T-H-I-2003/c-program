//Reverse an array
#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[30];
    int n,j;
    printf("Enter the number of elements in a array");
    scanf("%d",&n);
    for(j=0;j<n;j++){
        printf("Enter the element");
        scanf("%d",&arr[j]);
    }
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}