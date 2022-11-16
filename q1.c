//Get the three sides of a triangle and check if it is equilateral, isosceles or scalene.
#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the value of side 1 : ");
    scanf("%d",&s1);
    printf("Enter the value of side 2 : ");
    scanf("%d",&s2);
    printf("Enter the value of side 3 : ");
    scanf("%d",&s3);
    if(s1==s2 && s1==s3){
        printf("It is equilateral");
    }
    else if(s1==s2 || s1==s3 || s2==s3){
        printf("It is isosceles");
    }
    else{
        printf("It is scalene");
    
    }
    return 0;
}