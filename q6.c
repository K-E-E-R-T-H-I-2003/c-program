//Find if a number is an armstrong number :
#include<stdio.h>
int main(){
    int n;
    int temp,sum = 0,d;
    printf("Enter the number");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        d = temp %10;
        sum += (d*d*d);
        temp = temp /10;
    }
    if(sum==n){
        printf("Is is armstrong number");
    }
    else{
        printf("Is is not a armstrong number");
    }
    return 0;
}