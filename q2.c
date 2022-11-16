//Get the month and year and print the number of days in that month
#include<stdio.h>
int main(){
    int year,month;
    printf("Enter the year");
    scanf("%d",&year);
    printf("Enter the month (note :enter 1 for january and so on");
    scanf("%d",&month);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("\nIs is a leap year");
        if(month==2){
            printf("\nIs has 29 days");
        }
        else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            printf("\nIt has 31 days");
        }
        else{
            printf("\nIs has 30 days");
        }
    }
    else{
        printf("\nIs is a not a leap year");
        if(month==2){
            printf("\nIs has 28days");
        }
        else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            printf("\nIt has 31 days");
        }
        else{
            printf("\nIs has 30 days");
        }
    }
    return 0;
}
