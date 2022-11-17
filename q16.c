//Given an array of penalties fine[], an array of car numbers car[], and also the date.
//The task is to find the total fine which will be collected on the given date.
//Fine is collected from odd-numbered cars on even dates and vice versa.
#include<stdio.h>
int main(){
    int car[40];
    int fine[40];
    int n,i,date,amt=0;
    printf("Enter the number of cars");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the car name :");
        scanf("%d",&car[i]);
        printf("Enter the car's fine :");
        scanf("%d",&fine[i]);
    }
    printf("Enter the date (1-31)");
    scanf("%d",&date);
    if(date%2==0){
        for(i=0;i<n;i++){
        if(car[i]%2!=0){
            amt+=fine[i];
        }
        }
    }else{
        for(i=0;i<n;i++){
        if(car[i]%2==0){
            amt+=fine[i];
        }
        }

    }
    printf("The fine amount : %d",amt);
    return 0;
}