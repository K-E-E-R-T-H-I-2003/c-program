//Given the A and R i,e first term and common ratio of a GP series. Find the Nth term of the series.
#include<stdio.h>
#include<math.h>
int main(){
    int a,r,n,ans;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of r");
    scanf("%d",&r);
    printf("Enter the value of n");
    scanf("%d",&n);
    ans = (a * pow(r, n - 1));
    printf("%d",ans);
    return 0;
}