//Given a string, count the number of alphabets in it
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    int n=0,i,len;
    printf("Enter the string");
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            n = n+1;
        }
    
    printf("The number of alphabets : %d",n);
    return 0;
}