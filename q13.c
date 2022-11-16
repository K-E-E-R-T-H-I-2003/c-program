//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
#include <stdio.h>

int findSingle(int ar[], int ar_size)
{
	int res = ar[0];
	for (int i = 1; i < ar_size; i++)
		res = res ^ ar[i];
	return res;
}


int main()
{
	int ar[30]; 
    int no,j;
        printf("Enter the number of elements in a array");
        scanf("%d",&no);
        for(j=0;j<no;j++){
            printf("Enter the element");
            scanf("%d",&ar[j]);
        }
	printf("Element occurring once is %d",
		findSingle(ar, no));
	return 0;
}


