//17) Given an array, find the sum of elements at odd index and elements at even index
#include<stdio.h>
int main(){
    int arr[50];
    int i,n;
    int sum_odd=0,sum_even=0;
    printf("Enter the number of elements that you want to add");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            sum_even+=arr[i];
        }
        else{
            sum_odd+=arr[i];
        }
    }
    printf("The sum of odd index numbers : %d",sum_odd);
    printf("The sum of even index numbers : %d",sum_even);
    return 0;
}