// Given an array, find the second largest number
#include <stdio.h>
int main() {
      int array[30]; 
      int n,j;
        printf("Enter the number of elements in a array");
        scanf("%d",&n);
        for(j=0;j<n;j++){
            printf("Enter the element");
            scanf("%d",&array[j]);
        }
      int sec_largest = 0;
      for (int i = 0; i < 5; ++i)
      {
      	int count = 0;
      	for (int j = 0; j < 5; ++j)
      	{
      		if (array[i]>=array[j]) {
      			count++;
      		}
      	}
      	if (count == 4) {
      		printf("Second largest number in the given array is %d\n",array[i]);
      		break;
      	}
      }
}