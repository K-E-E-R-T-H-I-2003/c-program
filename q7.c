// Search an element in an array
#include<stdio.h>
int main(){
    int arr[30];
    int n,num,i;
    printf("Enter the number of elements to add in a array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number : ");
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are : ");
    for(i=0;i<n;i++){ 
        printf("\n%d",arr[i]);
    }
    printf("\n\nEnter the number to be searched : ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num){
            printf("\nThe %d is found in %d index position",num,i);
        }
    }
    return 0;
}