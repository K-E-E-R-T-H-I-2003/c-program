//Given a street of N houses (a row of houses), each house having K amount of money kept inside; 
//now there is a thief who is going to steal this money but he has a constraint/rule that he cannot
// steal/rob two adjacent houses. Find the maximum money he can rob.
#include <stdio.h>
int max(int num1, int num2)
{
	return (num1 > num2) ? num1 : num2;
}
int maxLoot(int* hval, int n)
{
	if (n < 0)
		return 0;

	if (n == 0)
		return hval[0];
	int pick = hval[n] + maxLoot(hval, n - 2);
	int notPick = maxLoot(hval, n - 1);
	return max(pick, notPick);
}

int main()
{
	int hval[] = { 6, 7, 1, 3, 8, 2, 4 };
	int n = sizeof(hval) / sizeof(hval[0]);
	printf("Maximum thief possible : %d ",
		maxLoot(hval, n - 1));
	return 0;
}

