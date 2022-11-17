//Given an array arr[] containing positive elements. m and n are two numbers defining a range. 
//The task is to check if the array contains all elements in the given range.
#include<stdio.h>
int main(){
    int arr1[50];
    int m,n,i,j,num;
    int k=0,l=0;
    int len;
   
    int count = 0;
    printf("Enter the starting range");
    scanf("%d",&m);
    printf("Enter the end range");
    scanf("%d",&n);
    len = n-m+1;
   
    for(i=m;i<=n;i++){
        arr1[k]=i;
        k++;
    }
    int arr2[]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<len;i++){
        for(j=0;j<10;j++){
                if(arr1[i]==arr2[j]){
                    count++;
            }
        }
    }
    printf("\nTo check whether the given range contain the elemnt in the array : arr2[]={1,2,3}");
    if(count==len){
        printf("\nThe elements are in the array");
    }
    else{
        printf("\nThe elements are not in the array");
    }
    return 0;
}